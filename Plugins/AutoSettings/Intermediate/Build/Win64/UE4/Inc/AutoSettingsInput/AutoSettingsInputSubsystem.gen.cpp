// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/AutoSettingsInputSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInputSubsystem() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputSubsystem_NoRegister();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References
	void UAutoSettingsInputSubsystem::StaticRegisterNativesUAutoSettingsInputSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UAutoSettingsInputSubsystem_NoRegister()
	{
		return UAutoSettingsInputSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AutoSettingsInputSubsystem.h" },
		{ "ModuleRelativePath", "Public/AutoSettingsInputSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsInputSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::ClassParams = {
		&UAutoSettingsInputSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSettingsInputSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSettingsInputSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSettingsInputSubsystem, 3477300382);
	template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsInputSubsystem>()
	{
		return UAutoSettingsInputSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSettingsInputSubsystem(Z_Construct_UClass_UAutoSettingsInputSubsystem, &UAutoSettingsInputSubsystem::StaticClass, TEXT("/Script/AutoSettingsInput"), TEXT("UAutoSettingsInputSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsInputSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
