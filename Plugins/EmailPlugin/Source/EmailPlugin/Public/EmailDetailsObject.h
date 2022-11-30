// Copyright 2019 DownToCode. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SendEmailLatent.h"
#include "EmailDetailsObject.generated.h"

UCLASS()
class EMAILPLUGIN_API UEmailDetailsObject : public UObject
{
	GENERATED_BODY()

public:
	UEmailDetailsObject() {}

	FORCEINLINE
	void Init(FString InSenderEmail, FString InPassword, FString InSenderName, FString InReceiverEmail, TArray<FString> InCC, TArray<FString> InBCC, FString InSubject, FString InMessage, TArray<FString> InAttachments, EEmailType InEmailService, bool InUsesHTML)
	{
		this->SenderEmail = InSenderEmail;
		this->Password = InPassword;
		this->SenderName = InSenderName;
		this->ReceiverEmail = InReceiverEmail;
		this->CC = InCC;
		this->BCC = InBCC;
		this->Subject = InSubject;
		this->Message = InMessage;
		this->Attachments = InAttachments;
		this->EmailService = InEmailService;
		this->bUsesHTML = InUsesHTML;
	}
public:
	UPROPERTY()
	FString SenderEmail;
	UPROPERTY()
	FString Password;
	UPROPERTY()
	FString SenderName;
	UPROPERTY()
	FString ReceiverEmail;
	UPROPERTY()
	TArray<FString> CC;
	UPROPERTY()
	TArray<FString> BCC;
	UPROPERTY()
	FString Subject;
	UPROPERTY()
	FString Message;
	UPROPERTY()
	TArray<FString> Attachments;
	UPROPERTY()
	EEmailType EmailService;
	UPROPERTY()
	bool bUsesHTML;
};


