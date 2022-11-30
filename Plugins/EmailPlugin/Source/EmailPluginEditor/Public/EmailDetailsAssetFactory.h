// Copyright 2019 DownToCode. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#if ENGINE_MAJOR_VERSION == 4 & ENGINE_MINOR_VERSION >= 25
#include "EmailDetailsAsset.h"
#include "Runtime/Launch/Resources/Version.h"
#include "AssetTools/Public/AssetTypeActions_Base.h"
#endif
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Android/AndroidRuntimeSettings/Classes/AndroidRuntimeSettings.h"
#include "EmailDetailsAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class EMAILPLUGINEDITOR_API UEmailDetailsAssetFactory : public UFactory
{
	GENERATED_BODY()

public:

	UEmailDetailsAssetFactory();

	~UEmailDetailsAssetFactory();

	//UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Contenxt, FFeedbackContext* Warn) override;
	virtual bool ShouldShowInNewMenu() const override;
	virtual FText GetDisplayName() const override;
	virtual bool CanCreateNew() const override;
	//~UFactory Interface	


};


#if ENGINE_MAJOR_VERSION == 4 & ENGINE_MINOR_VERSION >= 25

class FAssetTypeActions_EmailDetails : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_EmailDetails(EAssetTypeCategories::Type InCategory)
		: Category(InCategory)
	{}

	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_EmailDetails", "Email Details"); }
	virtual FColor GetTypeColor() const override { return FColor(255, 0, 0); }
	virtual UClass* GetSupportedClass() const override { return UEmailDetailsAsset::StaticClass(); }
	virtual uint32 GetCategories() override { return Category; }
protected:
	EAssetTypeCategories::Type Category;
};

#endif