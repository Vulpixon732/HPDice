// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Private/Misc/AutoSettingsInputValidationSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInputValidationSubsystem() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_NoRegister();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputValidationSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References
	void UAutoSettingsInputValidationSubsystem::StaticRegisterNativesUAutoSettingsInputValidationSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_NoRegister()
	{
		return UAutoSettingsInputValidationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/AutoSettingsInputValidationSubsystem.h" },
		{ "ModuleRelativePath", "Private/Misc/AutoSettingsInputValidationSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsInputValidationSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::ClassParams = {
		&UAutoSettingsInputValidationSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSettingsInputValidationSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSettingsInputValidationSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSettingsInputValidationSubsystem, 2009235645);
	template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsInputValidationSubsystem>()
	{
		return UAutoSettingsInputValidationSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSettingsInputValidationSubsystem(Z_Construct_UClass_UAutoSettingsInputValidationSubsystem, &UAutoSettingsInputValidationSubsystem::StaticClass, TEXT("/Script/AutoSettingsInput"), TEXT("UAutoSettingsInputValidationSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsInputValidationSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
