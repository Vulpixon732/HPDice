// Copyright 2019 DownToCode. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "UObject/WeakObjectPtr.h"
#include "Internationalization/Regex.h"
#include "HAL/FileManager.h"
#include "Engine/LatentActionManager.h"
#include "LatentActions.h"
#include "Runtime/Core/Public/Async/Async.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Launch/Resources/Version.h"

#if PLATFORM_WINDOWS
#include "Runtime/Core/Public/Windows/WindowsHWrapper.h"
#include "Runtime/Core/Public/Windows/AllowWindowsPlatformTypes.h"
#include <Windows.h>
#include <winspool.h>
#include <string>
#endif

#define UI UI_ST
THIRD_PARTY_INCLUDES_START

#if PLATFORM_WINDOWS
#include <WinSock2.h>
#if (ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 27) || ENGINE_MAJOR_VERSION == 5
	#include "ThirdParty/OpenSSL/1.1.1k/include/Win64/VS2015/openssl/ssl.h"
#else
#include "ThirdParty/OpenSSL/1.1.1/include/Win64/VS2015/openssl/ssl.h"
#endif
#endif

#if PLATFORM_ANDROID
#include "Android/AndroidPlatformMisc.h"
#if (ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 27) || ENGINE_MAJOR_VERSION == 5
#include "ThirdParty/OpenSSL/1.1.1k/include/Android/openssl/ssl.h"
#else
#include "ThirdParty/OpenSSL/1_0_1s/include/Android/openssl/ssl.h"
#endif
#endif

#ifdef BUFFER_SIZE
#undef BUFFER_SIZE
#endif

#if PLATFORM_WINDOWS
#include "CSmtp.h"
#include "Runtime/Core/Public/Windows/HideWindowsPlatformTypes.h"
#endif

#if PLATFORM_ANDROID
#include "CSmtp.h"
#endif

THIRD_PARTY_INCLUDES_END
#undef UI

#include "EmailPluginLogs.h"
#include "SendEmailLatent.generated.h"


UENUM(BlueprintType)
enum class EEmailType : uint8
{
	GMAIL,
	OUTLOOK,
	YAHOO
};

UENUM(BlueprintType)
enum class ECharSet : uint8
{
	USASCII,
	UTF8,
	GB2312
};

UENUM(BlueprintType)
enum class ESecurityType : uint8
{
	TLS,
	SSL
};

USTRUCT(BlueprintType)
struct FEmailDetails
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Email Plugin")
	FString SenderEmail;
	UPROPERTY(BlueprintReadWrite, Category = "Email Plugin")
	FString Password;
	UPROPERTY(BlueprintReadWrite, Category = "Email Plugin")
	FString SenderName;
	UPROPERTY(BlueprintReadWrite, Category = "Email Plugin")
	FString ReceiverEmail;
	UPROPERTY(BlueprintReadWrite, Category = "Email Plugin")
	TArray<FString> CC;
	UPROPERTY(BlueprintReadWrite, Category = "Email Plugin")
	TArray<FString> BCC;
	UPROPERTY(BlueprintReadWrite, Category = "Email Plugin")
	FString Subject;
	UPROPERTY(BlueprintReadWrite, Category = "Email Plugin")
	FString Message;
	UPROPERTY(BlueprintReadWrite, Category = "Email Plugin")
	TArray<FString> Attachments;
	UPROPERTY(BlueprintReadWrite, Category = "Email Plugin")
	bool bUseHTML;

	FEmailDetails()
		: SenderEmail("")
		  , Password("")
		  , SenderName("")
		  , ReceiverEmail("")
		  , Subject("")
		  , Message("")
		  , Attachments(TArray<FString>())
		  , bUseHTML(false)
	{
	}
};

class FSendEmail : public FPendingLatentAction
{
public:
	/** Function to execute on completion */
	FName ExecutionFunction;
	/** Link to fire on completion */
	int32 OutputLink;
	/** Object to call callback on upon completion */
	FWeakObjectPtr CallbackTarget;
	//Future used to check if Async function result it's ready
	TFuture<bool> Result;

	FSendEmail(FEmailDetails InEmailDetails, EEmailType InEmailService, ECharSet InCharacterSet, ESecurityType InSecurityType, EEmailResult& InEmailResult, FString& InError, const FLatentActionInfo& LatentInfo)
		: ExecutionFunction(LatentInfo.ExecutionFunction)
		  , OutputLink(LatentInfo.Linkage)
		  , CallbackTarget(LatentInfo.CallbackTarget)
		  , EmailDetails(InEmailDetails)
		  , EmailService(InEmailService)
		  , CharacterSet(InCharacterSet)
		  , SecurityType(InSecurityType)
		  , EmailResult(InEmailResult)
		  , OutError(InError)
		  , RunFirstTime(false)
	{
		ParseStringIntoLines(EmailDetails.Message);
		bCustomServer = false;
	}

	FSendEmail(FEmailDetails InEmailDetails, FString Username, FString InServer, int32 InPort, ECharSet InCharacterSet, ESecurityType InSecurityType, EEmailResult& InEmailResult, FString& InError, const FLatentActionInfo& LatentInfo)
		: ExecutionFunction(LatentInfo.ExecutionFunction)
		  , OutputLink(LatentInfo.Linkage)
		  , CallbackTarget(LatentInfo.CallbackTarget)
		  , EmailDetails(InEmailDetails)
		  , CharacterSet(InCharacterSet)
		  , SecurityType(InSecurityType)
		  , EmailResult(InEmailResult)
		  , OutError(InError)
		  , RunFirstTime(false)
		  , Username(Username)
		  , Server(InServer)
		  , Port(InPort)
	{
		ParseStringIntoLines(EmailDetails.Message);
		bCustomServer = true;
	}


	//UBlueprintAsyncActionBase interface
	virtual void UpdateOperation(FLatentResponse& Response) override
	{
		if (!RunFirstTime)
		{
			RunFirstTime = true;
			Result = Async(EAsyncExecution::Thread, [=]
			{
				// Check that all the attachment files exist
				for(FString Attachment : EmailDetails.Attachments)
				{
					if(!Attachment.IsEmpty() && !IFileManager::Get().FileExists(*Attachment))
					{
						EmailResult = EEmailResult::Fail;
						OutError = FString::Printf(TEXT("Could not send email as attachment file cannot be found with path %s"), *Attachment);
						return false;
					}
				}

#if PLATFORM_ANDROID
				// Make sure that on mobile we have internet connection. Not having one causes a crash.
				if(!FAndroidMisc::HasActiveWiFiConnection())
				{
					EmailResult = EEmailResult::Fail;
					OutError = "No wifi connection";
					return false;
				}
#endif
				// Compose and send email
				try
				{
					if(!ValidateEmail(EmailDetails.SenderEmail))
					{
						OutError = "Invalid sender email.";
						return false;
					}

					if(!ValidateEmail(EmailDetails.ReceiverEmail))
					{
						OutError = "Invalid receiver email.";
						return false;
					}
					
					Description = "Set up email details";
					CSmtp mail;
					if (bCustomServer)
					{
						mail.SetSMTPServer(TCHAR_TO_UTF8(*Server), Port);
						SetSecurityType(mail);
						if (!Username.IsEmpty()) mail.SetLogin(TCHAR_TO_UTF8(*Username));
						else mail.SetLogin(TCHAR_TO_UTF8(*EmailDetails.SenderEmail));
					}
					else
					{
						switch (EmailService)
						{
						case EEmailType::GMAIL:
							mail.SetSMTPServer("smtp.gmail.com", 587);
							SetSecurityType(mail);
							break;
						case EEmailType::OUTLOOK:
							mail.SetSMTPServer("smtp.office365.com", 587);
							SetSecurityType(mail);
							break;
						case EEmailType::YAHOO:
							mail.SetSMTPServer("smtp.mail.yahoo.com", 587);
							SetSecurityType(mail);
							break;
						default:
							return false;
							break;
						}
						mail.SetLogin(TCHAR_TO_UTF8(*EmailDetails.SenderEmail));
					}

					mail.m_bHTML = EmailDetails.bUseHTML;
					mail.SetPassword(TCHAR_TO_UTF8(*EmailDetails.Password));
					mail.SetSenderName(TCHAR_TO_UTF8(*EmailDetails.SenderName));
					mail.SetSenderMail(TCHAR_TO_UTF8(*EmailDetails.SenderEmail));
					mail.SetSubject(TCHAR_TO_UTF8(*EmailDetails.Subject));
					mail.AddRecipient(TCHAR_TO_UTF8(*EmailDetails.ReceiverEmail));
					for (FString CC : EmailDetails.CC)
					{
						if (!CC.IsEmpty()) mail.AddCCRecipient(TCHAR_TO_UTF8(*CC));
					}
					for (FString BCC : EmailDetails.BCC)
					{
						if (!BCC.IsEmpty())mail.AddBCCRecipient(TCHAR_TO_UTF8(*BCC));
					}
					mail.SetXPriority(XPRIORITY_NORMAL);

					switch (CharacterSet)
					{
					case ECharSet::USASCII:
						break;
					case ECharSet::UTF8:
						mail.SetCharSet("utf-8");
						break;
					case ECharSet::GB2312:
						mail.SetCharSet("gb2312");
						break;
					default:
						break;
					}

					Description = "Writing message";
					for (FString line : MsgLines)
					{
						mail.AddMsgLine(TCHAR_TO_UTF8(*line));
					}

					Description = "Attaching files";
					if (EmailDetails.Attachments.Num() > 0)
					{
						for (int i = 0; i < EmailDetails.Attachments.Num(); i++)
						{
							if (FPaths::FileExists(EmailDetails.Attachments[i]))
							{
#if PLATFORM_WINDOWS
								mail.AddAttachment(TCHAR_TO_UTF8(*ConvertForwardSlashesToBackwards(EmailDetails.Attachments[i])));
#else
								mail.AddAttachment(TCHAR_TO_UTF8(*EmailDetails.Attachments[i]));
#endif
							}
						}
					}
					Description = "Sending email";
					mail.Send();
					return true;
				}
				catch (ECSmtp e)
				{
					UE_LOG(LogEmailPlugin, Warning, TEXT("%s"), *FString(e.GetErrorText().c_str()));
					OutError = FString(e.GetErrorText().c_str());
					return false;
				}
			});
		}
		else
		{
			if (Result.IsReady())
			{
				if (Result.Get()) EmailResult = EEmailResult::Success;
				else EmailResult = EEmailResult::Fail;
				Response.FinishAndTriggerIf(true, ExecutionFunction, OutputLink, CallbackTarget);
			}
		}
	}

	//~UBlueprintAsyncActionBase interface

#if WITH_EDITOR
	virtual FString GetDescription() const override
	{
		return Description;
	}
#endif

private:
	void SetSecurityType(CSmtp& Mail)
	{
		switch (SecurityType)
		{
		case ESecurityType::TLS:
			Mail.SetSecurityType(USE_TLS);
			break;
		case ESecurityType::SSL:
			Mail.SetSecurityType(USE_SSL);
			break;
		default:
			Mail.SetSecurityType(USE_TLS);
			break;
		}
	}

	FString ConvertForwardSlashesToBackwards(FString Path)
	{
		return Path.Replace(TEXT("/"), TEXT("\\"));
	}

	void ParseStringIntoLines(FString Msg)
	{
		FString line;
		for (TCHAR C : Msg.GetCharArray())
		{
			if (C == *LINE_TERMINATOR)
			{
				MsgLines.Add(line);
				line = "";
			}
			else
			{
				line.AppendChar(C);
			}
		}

		MsgLines.Add(line);
	}

	bool ValidateEmail(FString Email)
	{
		const FRegexPattern Pattern(TEXT("^(?!\\.)(?!.*\\.\\.)(?!.*\\.$)[(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))]+"));
		FRegexMatcher Matcher(Pattern, Email);
		if (!Matcher.FindNext()) return false;
		
		return true;
	}
	
	FEmailDetails EmailDetails;
	EEmailType EmailService;
	ECharSet CharacterSet;
	ESecurityType SecurityType;
	EEmailResult& EmailResult;
	FString& OutError;
	bool RunFirstTime;
	FString Username;
	FString Server;
	int32 Port;
	bool bCustomServer;
	TArray<FString> MsgLines;
	FString Description;
};
