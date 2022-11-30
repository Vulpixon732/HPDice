// Copyright 2022 DownToCode. All Rights Reserved.

#include "EmailFL.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"
#include "SaveCaptureComponentLatent.h"

/*
 * Latent methods
 */
void UEmailFL::SendEmail(UObject* WorldContextObject, FEmailDetails EmailDetails, EEmailType EmailService, ECharSet CharacterSet, ESecurityType SecurityType, EEmailResult& OutResult, FString& OutError, FLatentActionInfo LatentInfo)
{
	//Register call to latent function
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FSendEmail>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FSendEmail(EmailDetails , EmailService, CharacterSet, SecurityType, OutResult, OutError, LatentInfo));
		}
	}
}

void UEmailFL::SendEmailV2(UObject* WorldContextObject, UEmailDetailsObject* EmailDetailsObject, ECharSet CharacterSet, ESecurityType SecurityType, EEmailResult& OutResult, FString& OutError, FLatentActionInfo LatentInfo)
{
	FEmailDetails EmailDetails;
	EmailDetails.SenderEmail = EmailDetailsObject->SenderEmail;
	EmailDetails.Password = EmailDetailsObject->Password;
	EmailDetails.SenderName = EmailDetailsObject->SenderName;
	EmailDetails.ReceiverEmail = EmailDetailsObject->ReceiverEmail;
	EmailDetails.CC = EmailDetailsObject->CC;
	EmailDetails.BCC = EmailDetailsObject->BCC;
	EmailDetails.Subject = EmailDetailsObject->Subject;
	EmailDetails.Message = EmailDetailsObject->Message;
	EmailDetails.Attachments = EmailDetailsObject->Attachments;
	EmailDetails.bUseHTML = EmailDetailsObject->bUsesHTML;

	//Register call to latent function
	if (UWorld * World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FSendEmail>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FSendEmail(EmailDetails, EmailDetailsObject->EmailService, CharacterSet, SecurityType, OutResult, OutError, LatentInfo));
		}
	}
}

void UEmailFL::SendEmailV3(UObject* WorldContextObject, FEmailDetails EmailDetails, FString Username, FString ServerName, int32 Port, ECharSet CharacterSet, ESecurityType SecurityType, EEmailResult& OutResult, FString& OutError, struct FLatentActionInfo LatentInfo)
{
	//Register call to latent function
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FSendEmail>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FSendEmail(EmailDetails, Username, ServerName, Port, CharacterSet, SecurityType, OutResult, OutError, LatentInfo));
		}
	}
}

void UEmailFL::SendEmailV4(UObject* WorldContextObject, UEmailDetailsObject* EmailDetailsObject, FString Username, FString ServerName, int32 Port, ECharSet CharacterSet, ESecurityType SecurityType, EEmailResult& OutResult, FString& OutError, FLatentActionInfo LatentInfo)
{
	FEmailDetails EmailDetails;
	EmailDetails.SenderEmail = EmailDetailsObject->SenderEmail;
	EmailDetails.Password = EmailDetailsObject->Password;
	EmailDetails.SenderName = EmailDetailsObject->SenderName;
	EmailDetails.ReceiverEmail = EmailDetailsObject->ReceiverEmail;
	EmailDetails.CC = EmailDetailsObject->CC;
	EmailDetails.BCC = EmailDetailsObject->BCC;
	EmailDetails.Subject = EmailDetailsObject->Subject;
	EmailDetails.Message = EmailDetailsObject->Message;
	EmailDetails.Attachments = EmailDetailsObject->Attachments;
	EmailDetails.bUseHTML = EmailDetailsObject->bUsesHTML;

	//Register call to latent function
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FSendEmail>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FSendEmail(EmailDetails, Username, ServerName, Port, CharacterSet, SecurityType, OutResult, OutError, LatentInfo));
		}
	}
}

void UEmailFL::SaveCaptureComponent2D(UObject* WorldContextObject, class USceneCaptureComponent2D* SceneCaptureComponent2D, FString ImagePath, EEmailResult& OutResult, struct FLatentActionInfo LatentInfo)
{
	//Register call to latent function
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		if (LatentActionManager.FindExistingAction<FSaveCaptureComponent2D>(LatentInfo.CallbackTarget, LatentInfo.UUID) == NULL)
		{
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FSaveCaptureComponent2D(SceneCaptureComponent2D, ImagePath, OutResult, LatentInfo));
		}
	}
}
/**
 *~Latent methods 
 */


/*
 * Utilities
 */
UEmailDetailsObject* UEmailFL::MakeEmailDetailsFromAsset(FName SelectedUser, FString SelectedUserInternal, UEmailDetailsAsset* EmailDetailsAsset, FString ReceiverEmail, TArray<FString> CC, TArray<FString> BCC, FString Subject, FString Message, TArray<FString> Attachments, bool bUsesHTML)
{
	FUserDetails Details = FUserDetails();
	for (int32 i = 0; i < EmailDetailsAsset->UserDetailsList.Num(); i++)
	{
		if (EmailDetailsAsset->UserDetailsList[i].User == SelectedUser.ToString())
		{
			Details = EmailDetailsAsset->UserDetailsList[i];
		}
	}

	UEmailDetailsObject* DetailObject = NewObject<UEmailDetailsObject>();
	DetailObject->Init(Details.Email, Details.Password, Details.SenderName, ReceiverEmail, CC, BCC, Subject, Message, Attachments, Details.EmailService, bUsesHTML);
	return DetailObject;
}

TArray<FName> UEmailFL::GetUsersFromEmailDetailsAsset(UEmailDetailsAsset* EmailDetailsAsset)
{
	TArray<FName> Users;
	for (FUserDetails Details : EmailDetailsAsset->UserDetailsList)
	{
		Users.Add(FName(*Details.User));
	}

	return Users;
}

UEmailDetailsObject* UEmailFL::MakeEmailDetails(FString SenderEmail, FString Password, FString SenderName, FString ReceiverEmail, TArray<FString> CC, TArray<FString> BCC, FString Subject, FString Message, TArray<FString> Attachments, EEmailType EmailService, bool bUsesHTML)
{
	UEmailDetailsObject* EmailDetailsObject = NewObject<UEmailDetailsObject>();
	EmailDetailsObject->Init(SenderEmail, Password, SenderName, ReceiverEmail, CC, BCC, Subject, Message, Attachments, EmailService, bUsesHTML);
	return EmailDetailsObject;
}

FString UEmailFL::GetHTMLForEmbeddedAttachement(FString Attachment, FVector2D Size, int32 NumSpacesBeforePic, int32 NumSpacesAfterPic)
{
	FString HTML;

	HTML += "<html>" LINE_TERMINATOR;
	HTML += "<head>" LINE_TERMINATOR;
	HTML += "</head>" LINE_TERMINATOR;
	HTML += "<body>" LINE_TERMINATOR;

	for (int32 i = 0; i < NumSpacesBeforePic; i++)
	{
		HTML += "</br>" LINE_TERMINATOR;
	}

	HTML += *FString::Printf(TEXT("<img width = %d height = %d id = \"1\" src = \"cid:%s\">" LINE_TERMINATOR), (int32)Size.X, (int32)Size.Y, *Attachment);

	for (int32 i = 0; i < NumSpacesAfterPic; i++)
	{
		HTML += "</br>" LINE_TERMINATOR;
	}
	HTML += "</body>" LINE_TERMINATOR;
	HTML += "</html>" LINE_TERMINATOR;

	return HTML;
}

FString UEmailFL::GetHTMLForOnlineEmbeddedAttachment(FString URL, FVector2D Size, int32 NumSpacesBeforePic, int32 NumSpacesAfterPic)
{
	FString HTML;

	HTML += "<html>" LINE_TERMINATOR;
	HTML += "<head>" LINE_TERMINATOR;
	HTML += "</head>" LINE_TERMINATOR;
	HTML += "<body>" LINE_TERMINATOR;

	for (int32 i = 0; i < NumSpacesBeforePic; i++)
	{
		HTML += "</br>" LINE_TERMINATOR;
	}

	HTML += *FString::Printf(TEXT("<img width = %d height = %d src = \"%s\">" LINE_TERMINATOR), (int32)Size.X, (int32)Size.Y, *URL);

	for (int32 i = 0; i < NumSpacesAfterPic; i++)
	{
		HTML += "</br>" LINE_TERMINATOR;
	}
	HTML += "</body>" LINE_TERMINATOR;
	HTML += "</html>" LINE_TERMINATOR;

	return HTML;
}

FString UEmailFL::GetIMGTagForEmbeddedAttachment(FString Attachment, FVector2D Size)
{
	return FString::Printf(TEXT("<img width = %d height = %d id = \"1\" src = \"cid:%s\">" LINE_TERMINATOR), (int32)Size.X, (int32)Size.Y, *Attachment);
}

FString UEmailFL::GetIMGTagForOnlineEmbeddedAttachment(FString URL, FVector2D Size)
{
	return FString::Printf(TEXT("<img width = %d height = %d src = \"%s\">" LINE_TERMINATOR), (int32)Size.X, (int32)Size.Y, *URL);
}

TArray<FString> UEmailFL::ConvertToArrayLines(FString String)
{
	TArray<FString> Lines;
	FString Line;
	TArray<TCHAR> CharArray = String.GetCharArray();
	for (int32 i = 0; i < CharArray.Num(); i++)
	{
		if (CharArray[i] == *LINE_TERMINATOR)
		{
			Lines.Add(Line);
			Line = "";
		}
		else
		{
			Line.AppendChar(CharArray[i]);
		}
	}

	Lines.Add(Line);
	return Lines;
}

bool UEmailFL::DoesFileExist(const FString Path)
{
	return FPaths::FileExists(Path);
}

bool UEmailFL::DeleteFile(FString FilePath)
{
	FString extension = FPaths::GetExtension(FPaths::GetCleanFilename(FilePath)).ToLower();
	if (extension != "jpg" && extension != "png" && extension != "jpeg")
	{
		UE_LOG(LogEmailPlugin, Warning, TEXT("File is not an image"));
		return false;
	}

	if (!FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*FilePath))
	{
		UE_LOG(LogEmailPlugin, Warning, TEXT("Could Not Find File"));
		return false;
	}

	return true;
}

FString UEmailFL::GetAndroidGamePath()
{
#if PLATFORM_ANDROID
	extern FString GFilePathBase;
	return GFilePathBase + FString("/UE4Game/") + FApp::GetProjectName() + FString("/");
#else
	return FString("");
#endif
}
/*
 *~Utilities
 */