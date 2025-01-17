// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/InputMappingGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingGroup() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingGroup();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigActionKeyMapping();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigAxisKeyMapping();
// End Cross Module References
class UScriptStruct* FInputMappingGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FInputMappingGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingGroup, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("InputMappingGroup"), sizeof(FInputMappingGroup), Get_Z_Construct_UScriptStruct_FInputMappingGroup_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FInputMappingGroup>()
{
	return FInputMappingGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputMappingGroup(FInputMappingGroup::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("InputMappingGroup"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFInputMappingGroup
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFInputMappingGroup()
	{
		UScriptStruct::DeferCppStructOps<FInputMappingGroup>(FName(TEXT("InputMappingGroup")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFInputMappingGroup;
	struct Z_Construct_UScriptStruct_FInputMappingGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnboundActionMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnboundActionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnboundActionMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnboundAxisMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnboundAxisMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnboundAxisMappings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// An input mapping group represents a set of mappings for which each action or axis has a single binding\n// Each action should have a unique name and each axis should have a unique name + scale combination, however axis keys count as all scales\n// It's valid to have axis mappings for (Name: MoveForward, Scale: 1, Key: W) and (Name: MoveForward, Scale: -1, Key: S) at the same time\n// It's not valid to have (Name: MoveForward, Scale: 1, Key: GamepadLeftStickY) and (Name: MoveForward, Scale: -1, Key: S)\n" },
		{ "ModuleRelativePath", "Public/InputMappingGroup.h" },
		{ "ToolTip", "An input mapping group represents a set of mappings for which each action or axis has a single binding\nEach action should have a unique name and each axis should have a unique name + scale combination, however axis keys count as all scales\nIt's valid to have axis mappings for (Name: MoveForward, Scale: 1, Key: W) and (Name: MoveForward, Scale: -1, Key: S) at the same time\nIt's not valid to have (Name: MoveForward, Scale: 1, Key: GamepadLeftStickY) and (Name: MoveForward, Scale: -1, Key: S)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingGroup>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConfigActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Input Mapping Group" },
		{ "Comment", "// Action mappings in this group\n" },
		{ "ModuleRelativePath", "Public/InputMappingGroup.h" },
		{ "TitleProperty", "ActionName" },
		{ "ToolTip", "Action mappings in this group" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingGroup, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConfigAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Input Mapping Group" },
		{ "Comment", "// Axis mappings in this group\n" },
		{ "ModuleRelativePath", "Public/InputMappingGroup.h" },
		{ "TitleProperty", "AxisName" },
		{ "ToolTip", "Axis mappings in this group" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingGroup, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_Inner = { "UnboundActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConfigActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMappingGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings = { "UnboundActionMappings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingGroup, UnboundActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_Inner = { "UnboundAxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConfigAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMappingGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings = { "UnboundAxisMappings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMappingGroup, UnboundAxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_ActionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_AxisMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundActionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingGroup_Statics::NewProp_UnboundAxisMappings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		nullptr,
		&NewStructOps,
		"InputMappingGroup",
		sizeof(FInputMappingGroup),
		alignof(FInputMappingGroup),
		Z_Construct_UScriptStruct_FInputMappingGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputMappingGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputMappingGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputMappingGroup"), sizeof(FInputMappingGroup), Get_Z_Construct_UScriptStruct_FInputMappingGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputMappingGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputMappingGroup_Hash() { return 1354871723U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
