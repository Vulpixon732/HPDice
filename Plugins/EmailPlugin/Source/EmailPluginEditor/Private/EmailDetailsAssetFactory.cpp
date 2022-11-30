// Copyright 2019 DownToCode. All Rights Reserved.

#include "EmailDetailsAssetFactory.h"
#include "Editor/UnrealEd/Public/Editor.h"
#include "EmailDetailsAsset.h"
#include "AssetTypeCategories.h"
#include "EmailPluginEditorLogs.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "Runtime/Projects/Public/Interfaces/IPluginManager.h"
#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/Misc/MessageDialog.h"

#define LOCTEXT_NAMESPACE "UEmailDetailsAssetFactory"

UEmailDetailsAssetFactory::UEmailDetailsAssetFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UEmailDetailsAsset::StaticClass();
}

UEmailDetailsAssetFactory::~UEmailDetailsAssetFactory()
{
}

UObject* UEmailDetailsAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Contenxt, FFeedbackContext* Warn)
{
	UEmailDetailsAsset* NewObjectAsset = NewObject<UEmailDetailsAsset>(InParent, Class, Name, Flags | RF_Transactional);
	return NewObjectAsset;
}

bool UEmailDetailsAssetFactory::ShouldShowInNewMenu() const
{
	return true;
}

bool UEmailDetailsAssetFactory::CanCreateNew() const
{
	return true;
}

FText UEmailDetailsAssetFactory::GetDisplayName() const
{
	return LOCTEXT("EmailAssetMenuEntry", "Email Details Asset");
}

#undef LOCTEXT_NAMESPACE