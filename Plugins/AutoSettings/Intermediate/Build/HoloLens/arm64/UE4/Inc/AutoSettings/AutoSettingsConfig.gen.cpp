// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/AutoSettingsConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsConfig() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingsConfig_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingsConfig();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
	void UAutoSettingsConfig::StaticRegisterNativesUAutoSettingsConfig()
	{
	}
	UClass* Z_Construct_UClass_UAutoSettingsConfig_NoRegister()
	{
		return UAutoSettingsConfig::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSettingsConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsIniName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingsIniName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsSectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingsSectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSettingsConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Plugin configuration page in Project Settings\n" },
		{ "IncludePath", "Misc/AutoSettingsConfig.h" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsConfig.h" },
		{ "ToolTip", "Plugin configuration page in Project Settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsIniName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Config ini file (without extension) that settings are saved to.\n// Requires engine restart for changes to take effect.\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsConfig.h" },
		{ "ToolTip", "Config ini file (without extension) that settings are saved to.\nRequires engine restart for changes to take effect." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsIniName = { "SettingsIniName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsConfig, SettingsIniName), METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsIniName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsIniName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsSectionName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Config section that settings are saved to within the config ini file\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsConfig.h" },
		{ "ToolTip", "Config section that settings are saved to within the config ini file" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsSectionName = { "SettingsSectionName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsConfig, SettingsSectionName), METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsSectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsSectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSettingsConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsIniName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsConfig_Statics::NewProp_SettingsSectionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSettingsConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsConfig_Statics::ClassParams = {
		&UAutoSettingsConfig::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutoSettingsConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSettingsConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSettingsConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSettingsConfig, 312318633);
	template<> AUTOSETTINGS_API UClass* StaticClass<UAutoSettingsConfig>()
	{
		return UAutoSettingsConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSettingsConfig(Z_Construct_UClass_UAutoSettingsConfig, &UAutoSettingsConfig::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UAutoSettingsConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
