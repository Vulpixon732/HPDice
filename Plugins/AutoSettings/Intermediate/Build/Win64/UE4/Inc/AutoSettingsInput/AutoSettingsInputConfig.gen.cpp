// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/Misc/AutoSettingsInputConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInputConfig() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyFriendlyName();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FAxisAssociation();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyScale();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FMappingGroupLink();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyGroup();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyIconSet();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyIconPair();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfig_NoRegister();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfig();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfigInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FKeyFriendlyName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FKeyFriendlyName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyFriendlyName, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("KeyFriendlyName"), sizeof(FKeyFriendlyName), Get_Z_Construct_UScriptStruct_FKeyFriendlyName_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FKeyFriendlyName>()
{
	return FKeyFriendlyName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyFriendlyName(FKeyFriendlyName::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("KeyFriendlyName"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyFriendlyName
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyFriendlyName()
	{
		UScriptStruct::DeferCppStructOps<FKeyFriendlyName>(FName(TEXT("KeyFriendlyName")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyFriendlyName;
	struct Z_Construct_UScriptStruct_FKeyFriendlyName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FriendlyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Defines friendly user-facing name text for a key\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Defines friendly user-facing name text for a key" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyFriendlyName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Key Friendly Name" },
		{ "Comment", "// Specified key\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Specified key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyFriendlyName, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "Key Friendly Name" },
		{ "Comment", "// User-facing friendly text name\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "User-facing friendly text name" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyFriendlyName, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_FriendlyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::NewProp_FriendlyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		nullptr,
		&NewStructOps,
		"KeyFriendlyName",
		sizeof(FKeyFriendlyName),
		alignof(FKeyFriendlyName),
		Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyFriendlyName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyFriendlyName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyFriendlyName"), sizeof(FKeyFriendlyName), Get_Z_Construct_UScriptStruct_FKeyFriendlyName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyFriendlyName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyFriendlyName_Hash() { return 441840017U; }
class UScriptStruct* FAxisAssociation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FAxisAssociation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxisAssociation, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("AxisAssociation"), sizeof(FAxisAssociation), Get_Z_Construct_UScriptStruct_FAxisAssociation_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FAxisAssociation>()
{
	return FAxisAssociation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAxisAssociation(FAxisAssociation::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("AxisAssociation"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFAxisAssociation
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFAxisAssociation()
	{
		UScriptStruct::DeferCppStructOps<FAxisAssociation>(FName(TEXT("AxisAssociation")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFAxisAssociation;
	struct Z_Construct_UScriptStruct_FAxisAssociation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnalogKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ButtonKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BooleanKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BooleanKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BooleanKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisAssociation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Determines association between axis and buttons\n// Used to tell the system that for example \"Gamepad Left Stick Y\" axis with a scale of -1 should be associated with \"Gamepad Left Stick Down\"\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Determines association between axis and buttons\nUsed to tell the system that for example \"Gamepad Left Stick Y\" axis with a scale of -1 should be associated with \"Gamepad Left Stick Down\"" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxisAssociation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AxisKey_MetaData[] = {
		{ "Category", "Axis Association" },
		{ "Comment", "// Axis key for this association\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Axis key for this association" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AxisKey = { "AxisKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAxisAssociation, AxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AxisKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AxisKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AnalogKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AnalogKey = { "AnalogKey", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAxisAssociation, AnalogKey_DEPRECATED), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AnalogKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AnalogKey_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys_Inner = { "ButtonKeys", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyScale, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys_MetaData[] = {
		{ "Category", "Axis Association" },
		{ "Comment", "// Button keys to associate axis with\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "Key" },
		{ "ToolTip", "Button keys to associate axis with" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys = { "ButtonKeys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAxisAssociation, ButtonKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys_Inner = { "BooleanKeys", nullptr, (EPropertyFlags)0x0000000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyScale, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys = { "BooleanKeys", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAxisAssociation, BooleanKeys_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxisAssociation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AxisKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_AnalogKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_ButtonKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisAssociation_Statics::NewProp_BooleanKeys,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxisAssociation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		nullptr,
		&NewStructOps,
		"AxisAssociation",
		sizeof(FAxisAssociation),
		alignof(FAxisAssociation),
		Z_Construct_UScriptStruct_FAxisAssociation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisAssociation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisAssociation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisAssociation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAxisAssociation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAxisAssociation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AxisAssociation"), sizeof(FAxisAssociation), Get_Z_Construct_UScriptStruct_FAxisAssociation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAxisAssociation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAxisAssociation_Hash() { return 1790990868U; }
class UScriptStruct* FMappingGroupLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FMappingGroupLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappingGroupLink, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("MappingGroupLink"), sizeof(FMappingGroupLink), Get_Z_Construct_UScriptStruct_FMappingGroupLink_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FMappingGroupLink>()
{
	return FMappingGroupLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMappingGroupLink(FMappingGroupLink::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("MappingGroupLink"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFMappingGroupLink
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFMappingGroupLink()
	{
		UScriptStruct::DeferCppStructOps<FMappingGroupLink>(FName(TEXT("MappingGroupLink")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFMappingGroupLink;
	struct Z_Construct_UScriptStruct_FMappingGroupLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MappingGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingGroupLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Defines a set of mapping groups which are linked\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Defines a set of mapping groups which are linked" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappingGroupLink>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups_Inner = { "MappingGroups", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups_MetaData[] = {
		{ "Category", "Mapping Group Link" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups = { "MappingGroups", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMappingGroupLink, MappingGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappingGroupLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappingGroupLink_Statics::NewProp_MappingGroups,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappingGroupLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		nullptr,
		&NewStructOps,
		"MappingGroupLink",
		sizeof(FMappingGroupLink),
		alignof(FMappingGroupLink),
		Z_Construct_UScriptStruct_FMappingGroupLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingGroupLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMappingGroupLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappingGroupLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMappingGroupLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMappingGroupLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MappingGroupLink"), sizeof(FMappingGroupLink), Get_Z_Construct_UScriptStruct_FMappingGroupLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMappingGroupLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMappingGroupLink_Hash() { return 1479272710U; }
class UScriptStruct* FKeyScale::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FKeyScale_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyScale, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("KeyScale"), sizeof(FKeyScale), Get_Z_Construct_UScriptStruct_FKeyScale_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FKeyScale>()
{
	return FKeyScale::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyScale(FKeyScale::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("KeyScale"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyScale
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyScale()
	{
		UScriptStruct::DeferCppStructOps<FKeyScale>(FName(TEXT("KeyScale")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyScale;
	struct Z_Construct_UScriptStruct_FKeyScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyScale_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Represents pairing of a button key and a scale, used to associate buttons with an axis\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Represents pairing of a button key and a scale, used to associate buttons with an axis" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyScale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyScale>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Key Scale" },
		{ "Comment", "// Button key\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Button key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyScale, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Key Scale" },
		{ "Comment", "// Scale of the axis that the button key should be associated with\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Scale of the axis that the button key should be associated with" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyScale, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyScale_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyScale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		nullptr,
		&NewStructOps,
		"KeyScale",
		sizeof(FKeyScale),
		alignof(FKeyScale),
		Z_Construct_UScriptStruct_FKeyScale_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyScale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyScale_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyScale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyScale()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyScale_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyScale"), sizeof(FKeyScale), Get_Z_Construct_UScriptStruct_FKeyScale_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyScale_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyScale_Hash() { return 3827263505U; }
class UScriptStruct* FKeyGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FKeyGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyGroup, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("KeyGroup"), sizeof(FKeyGroup), Get_Z_Construct_UScriptStruct_FKeyGroup_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FKeyGroup>()
{
	return FKeyGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyGroup(FKeyGroup::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("KeyGroup"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyGroup
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyGroup()
	{
		UScriptStruct::DeferCppStructOps<FKeyGroup>(FName(TEXT("KeyGroup")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyGroup;
	struct Z_Construct_UScriptStruct_FKeyGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyGroupTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGroupTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGamepadKeys_MetaData[];
#endif
		static void NewProp_bUseGamepadKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGamepadKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNonGamepadKeys_MetaData[];
#endif
		static void NewProp_bUseNonGamepadKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNonGamepadKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Defines a group of keys which should be separated from other keys\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Defines a group of keys which should be separated from other keys" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_KeyGroupTag_MetaData[] = {
		{ "Category", "Key Group" },
		{ "Comment", "// Tag to identify this key group\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Tag to identify this key group" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_KeyGroupTag = { "KeyGroupTag", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyGroup, KeyGroupTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_KeyGroupTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_KeyGroupTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys_MetaData[] = {
		{ "Category", "Key Group" },
		{ "Comment", "// If true, will include all gamepad keys in this key group\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If true, will include all gamepad keys in this key group" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys_SetBit(void* Obj)
	{
		((FKeyGroup*)Obj)->bUseGamepadKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys = { "bUseGamepadKeys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKeyGroup), &Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys_MetaData[] = {
		{ "Category", "Key Group" },
		{ "Comment", "// If true, will include all keys that are not gamepad keys in this key group\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If true, will include all keys that are not gamepad keys in this key group" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys_SetBit(void* Obj)
	{
		((FKeyGroup*)Obj)->bUseNonGamepadKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys = { "bUseNonGamepadKeys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKeyGroup), &Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Key Group" },
		{ "Comment", "// Keys to include in this key group\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "KeyName" },
		{ "ToolTip", "Keys to include in this key group" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyGroup, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_KeyGroupTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseGamepadKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_bUseNonGamepadKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyGroup_Statics::NewProp_Keys,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		nullptr,
		&NewStructOps,
		"KeyGroup",
		sizeof(FKeyGroup),
		alignof(FKeyGroup),
		Z_Construct_UScriptStruct_FKeyGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyGroup"), sizeof(FKeyGroup), Get_Z_Construct_UScriptStruct_FKeyGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyGroup_Hash() { return 3527235654U; }
class UScriptStruct* FKeyIconSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FKeyIconSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyIconSet, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("KeyIconSet"), sizeof(FKeyIconSet), Get_Z_Construct_UScriptStruct_FKeyIconSet_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FKeyIconSet>()
{
	return FKeyIconSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyIconSet(FKeyIconSet::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("KeyIconSet"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyIconSet
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyIconSet()
	{
		UScriptStruct::DeferCppStructOps<FKeyIconSet>(FName(TEXT("KeyIconSet")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyIconSet;
	struct Z_Construct_UScriptStruct_FKeyIconSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IconMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_IconMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Icons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Icons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyIconSet_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Set of key icons\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Set of key icons" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyIconSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Key Icon Set" },
		{ "Comment", "// Tags to identify this icon set\n// May include platform such as \"XBox\" or \"PlayStation\" and/or variations such as \"Small\" or \"Large\"\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Tags to identify this icon set\nMay include platform such as \"XBox\" or \"PlayStation\" and/or variations such as \"Small\" or \"Large\"" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyIconSet, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_ValueProp = { "IconMap", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_Key_KeyProp = { "IconMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_MetaData[] = {
		{ "Category", "Key Icon Set" },
		{ "Comment", "// Icons defined for different keys\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Icons defined for different keys" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap = { "IconMap", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyIconSet, IconMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons_Inner = { "Icons", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyIconPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons = { "Icons", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyIconSet, Icons_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyIconSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_IconMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconSet_Statics::NewProp_Icons,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyIconSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		nullptr,
		&NewStructOps,
		"KeyIconSet",
		sizeof(FKeyIconSet),
		alignof(FKeyIconSet),
		Z_Construct_UScriptStruct_FKeyIconSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyIconSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyIconSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyIconSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyIconSet"), sizeof(FKeyIconSet), Get_Z_Construct_UScriptStruct_FKeyIconSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyIconSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyIconSet_Hash() { return 3413522778U; }
class UScriptStruct* FKeyIconPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FKeyIconPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyIconPair, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("KeyIconPair"), sizeof(FKeyIconPair), Get_Z_Construct_UScriptStruct_FKeyIconPair_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FKeyIconPair>()
{
	return FKeyIconPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyIconPair(FKeyIconPair::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("KeyIconPair"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyIconPair
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyIconPair()
	{
		UScriptStruct::DeferCppStructOps<FKeyIconPair>(FName(TEXT("KeyIconPair")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFKeyIconPair;
	struct Z_Construct_UScriptStruct_FKeyIconPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyIconPair_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Deprecated structure\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Deprecated structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyIconPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyIconPair, Key_DEPRECATED), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Icon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyIconPair, Icon_DEPRECATED), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Icon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyIconPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyIconPair_Statics::NewProp_Icon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyIconPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		nullptr,
		&NewStructOps,
		"KeyIconPair",
		sizeof(FKeyIconPair),
		alignof(FKeyIconPair),
		Z_Construct_UScriptStruct_FKeyIconPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyIconPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyIconPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyIconPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyIconPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyIconPair"), sizeof(FKeyIconPair), Get_Z_Construct_UScriptStruct_FKeyIconPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyIconPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyIconPair_Hash() { return 57817999U; }
	void UAutoSettingsInputConfig::StaticRegisterNativesUAutoSettingsInputConfig()
	{
	}
	UClass* Z_Construct_UClass_UAutoSettingsInputConfig_NoRegister()
	{
		return UAutoSettingsInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSettingsInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoInitializePlayerInputOverrides_MetaData[];
#endif
		static void NewProp_bAutoInitializePlayerInputOverrides_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoInitializePlayerInputOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowModifierKeys_MetaData[];
#endif
		static void NewProp_AllowModifierKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowModifierKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftModifierOverrideText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ShiftModifierOverrideText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CtrlModifierOverrideText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CtrlModifierOverrideText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltModifierOverrideText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AltModifierOverrideText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CmdModifierOverrideText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CmdModifierOverrideText;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPresets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPresets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPresets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowMultipleBindingsPerKey_MetaData[];
#endif
		static void NewProp_AllowMultipleBindingsPerKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowMultipleBindingsPerKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappingGroupLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingGroupLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MappingGroupLinks;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreservedActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreservedActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreservedActions;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreservedAxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreservedAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreservedAxes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyIconSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyIconSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyIconSets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyFriendlyNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyFriendlyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyFriendlyNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllowedKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisallowedKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisallowedKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisallowedKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingEscapeKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingEscapeKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BindingEscapeKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseMoveCaptureDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseMoveCaptureDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisAssociations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisAssociations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisAssociations;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlacklistedActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlacklistedActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlacklistedActions;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlacklistedAxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlacklistedAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlacklistedAxes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSettingsInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration object for Auto Settings Input\n */" },
		{ "IncludePath", "Misc/AutoSettingsInputConfig.h" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Configuration object for Auto Settings Input" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Player Controllers need to be initialized with AutoSettings to set up their custom input overrides, otherwise they will still be using the mappings from the project settings Input page\n// If true, the system will automatically try to initialize the correct input overrides for new PlayerControllers it finds, which is the easiest option\n// If false, input can be manually initialized per PlayerController with InitializePlayerInputOverrides for greater flexibility\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Player Controllers need to be initialized with AutoSettings to set up their custom input overrides, otherwise they will still be using the mappings from the project settings Input page\nIf true, the system will automatically try to initialize the correct input overrides for new PlayerControllers it finds, which is the easiest option\nIf false, input can be manually initialized per PlayerController with InitializePlayerInputOverrides for greater flexibility" },
	};
#endif
	void Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides_SetBit(void* Obj)
	{
		((UAutoSettingsInputConfig*)Obj)->bAutoInitializePlayerInputOverrides = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides = { "bAutoInitializePlayerInputOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSettingsInputConfig), &Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Allow Shift, Ctrl, Alt, Cmd modifiers for action mappings\n// Note: Axis mappings cannot have modifiers\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Allow Shift, Ctrl, Alt, Cmd modifiers for action mappings\nNote: Axis mappings cannot have modifiers" },
	};
#endif
	void Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys_SetBit(void* Obj)
	{
		((UAutoSettingsInputConfig*)Obj)->AllowModifierKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys = { "AllowModifierKeys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSettingsInputConfig), &Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_ShiftModifierOverrideText_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If not empty, text to use for shift modifier labels if an icon is not found\n" },
		{ "EditCondition", "AllowModifierKeys" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If not empty, text to use for shift modifier labels if an icon is not found" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_ShiftModifierOverrideText = { "ShiftModifierOverrideText", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, ShiftModifierOverrideText), METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_ShiftModifierOverrideText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_ShiftModifierOverrideText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CtrlModifierOverrideText_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If not empty, text to use for ctrl modifier labels if an icon is not found\n" },
		{ "EditCondition", "AllowModifierKeys" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If not empty, text to use for ctrl modifier labels if an icon is not found" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CtrlModifierOverrideText = { "CtrlModifierOverrideText", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, CtrlModifierOverrideText), METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CtrlModifierOverrideText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CtrlModifierOverrideText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AltModifierOverrideText_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If not empty, text to use for alt modifier labels if an icon is not found\n" },
		{ "EditCondition", "AllowModifierKeys" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If not empty, text to use for alt modifier labels if an icon is not found" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AltModifierOverrideText = { "AltModifierOverrideText", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, AltModifierOverrideText), METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AltModifierOverrideText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AltModifierOverrideText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CmdModifierOverrideText_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If not empty, text to use for cmd modifier labels if an icon is not found\n" },
		{ "EditCondition", "AllowModifierKeys" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If not empty, text to use for cmd modifier labels if an icon is not found" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CmdModifierOverrideText = { "CmdModifierOverrideText", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, CmdModifierOverrideText), METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CmdModifierOverrideText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CmdModifierOverrideText_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets_Inner = { "InputPresets", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputMappingPreset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Input mapping presets for this project\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "PresetTag" },
		{ "ToolTip", "Input mapping presets for this project" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets = { "InputPresets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, InputPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If false, new bindings will remove key from all other mappings\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If false, new bindings will remove key from all other mappings" },
	};
#endif
	void Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey_SetBit(void* Obj)
	{
		((UAutoSettingsInputConfig*)Obj)->AllowMultipleBindingsPerKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey = { "AllowMultipleBindingsPerKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSettingsInputConfig), &Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks_Inner = { "MappingGroupLinks", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMappingGroupLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// (Advanced) If AllowMultipleBindingsPerKey is true, this determines mapping groups which should remain \"linked\" with unique bindings\n" },
		{ "EditCondition", "AllowMultipleBindingsPerKey" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "MappingGroups" },
		{ "ToolTip", "(Advanced) If AllowMultipleBindingsPerKey is true, this determines mapping groups which should remain \"linked\" with unique bindings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks = { "MappingGroupLinks", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, MappingGroupLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions_Inner = { "PreservedActions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Actions in this list will always be preserved when modifying bindings\n// Eg. You have UI-related actions that should remain bound even when the same inputs are bound to in-game actions\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Actions in this list will always be preserved when modifying bindings\nEg. You have UI-related actions that should remain bound even when the same inputs are bound to in-game actions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions = { "PreservedActions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, PreservedActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes_Inner = { "PreservedAxes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Axes in this list will always be preserved when modifying bindings\n// See BlacklistedActions\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Axes in this list will always be preserved when modifying bindings\nSee BlacklistedActions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes = { "PreservedAxes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, PreservedAxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets_Inner = { "KeyIconSets", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyIconSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Sets of key icons for this project\n// Example sets might include \"Xbox Small\" or \"Playstation Transparent\", where the platform is determined on a global application-wide level and the variant is determined by location in game\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Sets of key icons for this project\nExample sets might include \"Xbox Small\" or \"Playstation Transparent\", where the platform is determined on a global application-wide level and the variant is determined by location in game" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets = { "KeyIconSets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, KeyIconSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames_Inner = { "KeyFriendlyNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyFriendlyName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Friendly key names to use if an icon is not available\n// If a friendly name is not specified for a key, the default FKey GetDisplayName will be used\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "Key" },
		{ "ToolTip", "Friendly key names to use if an icon is not available\nIf a friendly name is not specified for a key, the default FKey GetDisplayName will be used" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames = { "KeyFriendlyNames", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, KeyFriendlyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups_Inner = { "KeyGroups", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Groups of keys to separate from other keys\n// Useful if you want a separate column for gamepad controls in your input UI or other similar cases\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "KeyGroupTag" },
		{ "ToolTip", "Groups of keys to separate from other keys\nUseful if you want a separate column for gamepad controls in your input UI or other similar cases" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups = { "KeyGroups", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, KeyGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys_Inner = { "AllowedKeys", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Key whitelist, use to allow specific keys for input mapping\n// Leave empty to allow all keys\n// Keys here will have no effect if also in DisallowedKeys\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Key whitelist, use to allow specific keys for input mapping\nLeave empty to allow all keys\nKeys here will have no effect if also in DisallowedKeys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys = { "AllowedKeys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, AllowedKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys_Inner = { "DisallowedKeys", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Key blacklist, use to disallow specific keys for input mapping\n// Will take precedence over AllowedKeys\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Key blacklist, use to disallow specific keys for input mapping\nWill take precedence over AllowedKeys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys = { "DisallowedKeys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, DisallowedKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys_Inner = { "BindingEscapeKeys", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If any of these keys are pressed while listening for input binding, it will instead cancel and keep the original binding\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "If any of these keys are pressed while listening for input binding, it will instead cancel and keep the original binding" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys = { "BindingEscapeKeys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, BindingEscapeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MouseMoveCaptureDistance_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Distance in pixels the mouse must travel before it will trigger a capture for a mouse axis while listening for input bindings\n// Lower values are more sensitive, higher values mean you have to move the mouse further\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "ToolTip", "Distance in pixels the mouse must travel before it will trigger a capture for a mouse axis while listening for input bindings\nLower values are more sensitive, higher values mean you have to move the mouse further" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MouseMoveCaptureDistance = { "MouseMoveCaptureDistance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, MouseMoveCaptureDistance), METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MouseMoveCaptureDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MouseMoveCaptureDistance_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations_Inner = { "AxisAssociations", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAxisAssociation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Determines association between axes and buttons\n// This is used during axis rebinding to determine which axis should be used when a key press is detected\n// e.g. If the system detects the player has pressed \"Gamepad Left Stick Down\" key when binding \"Move Backward\",\n// these associations could specify that the \"Gamepad Left Stick Y\" axis should be bound with a scale of -1\n// otherwise the mapping will only have 2 key states (pressed and not pressed) rather than the full range of the axis\n" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
		{ "TitleProperty", "AxisKey" },
		{ "ToolTip", "Determines association between axes and buttons\nThis is used during axis rebinding to determine which axis should be used when a key press is detected\ne.g. If the system detects the player has pressed \"Gamepad Left Stick Down\" key when binding \"Move Backward\",\nthese associations could specify that the \"Gamepad Left Stick Y\" axis should be bound with a scale of -1\notherwise the mapping will only have 2 key states (pressed and not pressed) rather than the full range of the axis" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations = { "AxisAssociations", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, AxisAssociations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions_Inner = { "BlacklistedActions", nullptr, (EPropertyFlags)0x0000000020004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions = { "BlacklistedActions", nullptr, (EPropertyFlags)0x0020080020004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, BlacklistedActions_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes_Inner = { "BlacklistedAxes", nullptr, (EPropertyFlags)0x0000000020004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes = { "BlacklistedAxes", nullptr, (EPropertyFlags)0x0020080020004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingsInputConfig, BlacklistedAxes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSettingsInputConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_bAutoInitializePlayerInputOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowModifierKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_ShiftModifierOverrideText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CtrlModifierOverrideText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AltModifierOverrideText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_CmdModifierOverrideText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_InputPresets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowMultipleBindingsPerKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MappingGroupLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_PreservedAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyIconSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyFriendlyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_KeyGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AllowedKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_DisallowedKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BindingEscapeKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_MouseMoveCaptureDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_AxisAssociations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingsInputConfig_Statics::NewProp_BlacklistedAxes,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAutoSettingsInputConfigInterface_NoRegister, (int32)VTABLE_OFFSET(UAutoSettingsInputConfig, IAutoSettingsInputConfigInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSettingsInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsInputConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsInputConfig_Statics::ClassParams = {
		&UAutoSettingsInputConfig::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutoSettingsInputConfig_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSettingsInputConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSettingsInputConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSettingsInputConfig, 3239327021);
	template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsInputConfig>()
	{
		return UAutoSettingsInputConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSettingsInputConfig(Z_Construct_UClass_UAutoSettingsInputConfig, &UAutoSettingsInputConfig::StaticClass, TEXT("/Script/AutoSettingsInput"), TEXT("UAutoSettingsInputConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsInputConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
