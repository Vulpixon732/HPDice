// Copyright 2019 DownToCode. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SendEmailLatent.h"
#include "EmailDetailsAsset.generated.h"

USTRUCT(BlueprintType)
struct FUserDetails
{
	GENERATED_BODY()

	FUserDetails() 
	{
		EmailService = EEmailType::GMAIL;
	}

	UPROPERTY(EditAnywhere, Category = "User Details")
	FString User;

	UPROPERTY(EditAnywhere, Category = "User Details")
	FString Email;

	UPROPERTY(EditAnywhere, Category = "User Details")
	FString Password;

	UPROPERTY(EditAnywhere, Category = "User Details")
	FString SenderName;

	UPROPERTY(EditAnywhere, Category = "User Details")
	EEmailType EmailService;
};

/**
 * 
 */
UCLASS()
class EMAILPLUGIN_API UEmailDetailsAsset : public UObject
{
	GENERATED_BODY()
	
public: 

	UEmailDetailsAsset();

	UPROPERTY(EditAnywhere, Category = "User Details")
	TArray<FUserDetails> UserDetailsList;
};
