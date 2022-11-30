// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/InputMappingPreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingPreset() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingLayout();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingGroup();
// End Cross Module References
class UScriptStruct* FInputMappingPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FInputMappingPreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingPreset, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("InputMappingPreset"), sizeof(FInputMappingPreset), Get_Z_Construct_UScriptStruct_FInputMappingPreset_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FInputMappingPreset>()
{
	return FInputMappingPreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputMappingPreset(FInputMappingPreset::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("InputMappingPreset"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFInputMappingPreset
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFInputMappingPreset()
	{
		UScriptStruct::DeferCppStructOps<FInputMappingPreset>(FName(TEXT("InputMappingPreset")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFInputMappingPreset;
	struct Z_Construct_UScriptStruct_FInputMappingPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresetTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultMappings_MetaData[];
#endif
		static void NewProp_bUseDefaultMappings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultMappings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputLayout;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappingGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MappingGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A complete set of input mappings making up a preset\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InputMappingPreset.h" },
		{ "ToolTip", "A complete set of input mappings making up a preset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingPreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_PresetTag_MetaData[] = {
		{ "Category", "Input Mapping Preset" },
		{ "Comment", "// Tag for this preset\n" },
		{ "ModuleRelativePath", "Public/InputMappingPreset.h" },
		{ "ToolTip", "Tag for this preset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_PresetTag = { "PresetTag", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingPreset, PresetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_PresetTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_PresetTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings_MetaData[] = {
		{ "Category", "Input Mapping Preset" },
		{ "Comment", "// If true, use default mappings defined in Input page in project settings\n" },
		{ "ModuleRelativePath", "Public/InputMappingPreset.h" },
		{ "ToolTip", "If true, use default mappings defined in Input page in project settings" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings_SetBit(void* Obj)
	{
		((FInputMappingPreset*)Obj)->bUseDefaultMappings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings = { "bUseDefaultMappings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputMappingPreset), &Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_InputLayout_MetaData[] = {
		{ "Category", "Input Mapping Preset" },
		{ "Comment", "// Input mappings for this preset if not using default mappings\n" },
		{ "EditCondition", "!bUseDefaultMappings" },
		{ "ModuleRelativePath", "Public/InputMappingPreset.h" },
		{ "ToolTip", "Input mappings for this preset if not using default mappings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_InputLayout = { "InputLayout", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingPreset, InputLayout), Z_Construct_UScriptStruct_FInputMappingLayout, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_InputLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_InputLayout_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups_Inner = { "MappingGroups", nullptr, (EPropertyFlags)0x0000000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputMappingGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/InputMappingPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups = { "MappingGroups", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingPreset, MappingGroups_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_PresetTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_bUseDefaultMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_InputLayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingPreset_Statics::NewProp_MappingGroups,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		nullptr,
		&NewStructOps,
		"InputMappingPreset",
		sizeof(FInputMappingPreset),
		alignof(FInputMappingPreset),
		Z_Construct_UScriptStruct_FInputMappingPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputMappingPreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputMappingPreset"), sizeof(FInputMappingPreset), Get_Z_Construct_UScriptStruct_FInputMappingPreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputMappingPreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputMappingPreset_Hash() { return 394425928U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
