// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/KeyMappingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyMappingTypes() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigAxisKeyMapping();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FConfigActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
// End Cross Module References

static_assert(std::is_polymorphic<FConfigAxisKeyMapping>() == std::is_polymorphic<FInputAxisKeyMapping>(), "USTRUCT FConfigAxisKeyMapping cannot be polymorphic unless super FInputAxisKeyMapping is polymorphic");

class UScriptStruct* FConfigAxisKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfigAxisKeyMapping, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("ConfigAxisKeyMapping"), sizeof(FConfigAxisKeyMapping), Get_Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FConfigAxisKeyMapping>()
{
	return FConfigAxisKeyMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConfigAxisKeyMapping(FConfigAxisKeyMapping::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("ConfigAxisKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFConfigAxisKeyMapping
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFConfigAxisKeyMapping()
	{
		UScriptStruct::DeferCppStructOps<FConfigAxisKeyMapping>(FName(TEXT("ConfigAxisKeyMapping")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFConfigAxisKeyMapping;
	struct Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDefault_MetaData[];
#endif
		static void NewProp_bIsDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Config editable axis mapping\n" },
		{ "ModuleRelativePath", "Public/KeyMappingTypes.h" },
		{ "ToolTip", "Config editable axis mapping" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfigAxisKeyMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault_MetaData[] = {
		{ "Comment", "/**\n\x09 * True if this mapping was using the default key from the base preset at the time it was saved\n\x09 * This allows us to keep it in sync if the default mapping is changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/KeyMappingTypes.h" },
		{ "ToolTip", "True if this mapping was using the default key from the base preset at the time it was saved\nThis allows us to keep it in sync if the default mapping is changed" },
	};
#endif
	void Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault_SetBit(void* Obj)
	{
		((FConfigAxisKeyMapping*)Obj)->bIsDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault = { "bIsDefault", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConfigAxisKeyMapping), &Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::NewProp_bIsDefault,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		Z_Construct_UScriptStruct_FInputAxisKeyMapping,
		&NewStructOps,
		"ConfigAxisKeyMapping",
		sizeof(FConfigAxisKeyMapping),
		alignof(FConfigAxisKeyMapping),
		Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConfigAxisKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConfigAxisKeyMapping"), sizeof(FConfigAxisKeyMapping), Get_Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConfigAxisKeyMapping_Hash() { return 4136618168U; }

static_assert(std::is_polymorphic<FConfigActionKeyMapping>() == std::is_polymorphic<FInputActionKeyMapping>(), "USTRUCT FConfigActionKeyMapping cannot be polymorphic unless super FInputActionKeyMapping is polymorphic");

class UScriptStruct* FConfigActionKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FConfigActionKeyMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfigActionKeyMapping, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("ConfigActionKeyMapping"), sizeof(FConfigActionKeyMapping), Get_Z_Construct_UScriptStruct_FConfigActionKeyMapping_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FConfigActionKeyMapping>()
{
	return FConfigActionKeyMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConfigActionKeyMapping(FConfigActionKeyMapping::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("ConfigActionKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFConfigActionKeyMapping
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFConfigActionKeyMapping()
	{
		UScriptStruct::DeferCppStructOps<FConfigActionKeyMapping>(FName(TEXT("ConfigActionKeyMapping")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFConfigActionKeyMapping;
	struct Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDefault_MetaData[];
#endif
		static void NewProp_bIsDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Sadly the mapping names aren't editable in config unless using these child classes\n// Config editable action mapping\n" },
		{ "ModuleRelativePath", "Public/KeyMappingTypes.h" },
		{ "ToolTip", "Sadly the mapping names aren't editable in config unless using these child classes\nConfig editable action mapping" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfigActionKeyMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault_MetaData[] = {
		{ "Comment", "/**\n\x09 * True if this mapping was using the default key from the base preset at the time it was saved\n\x09 * This allows us to keep it in sync if the default mapping is changed\n\x09 */" },
		{ "ModuleRelativePath", "Public/KeyMappingTypes.h" },
		{ "ToolTip", "True if this mapping was using the default key from the base preset at the time it was saved\nThis allows us to keep it in sync if the default mapping is changed" },
	};
#endif
	void Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault_SetBit(void* Obj)
	{
		((FConfigActionKeyMapping*)Obj)->bIsDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault = { "bIsDefault", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FConfigActionKeyMapping), &Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::NewProp_bIsDefault,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		Z_Construct_UScriptStruct_FInputActionKeyMapping,
		&NewStructOps,
		"ConfigActionKeyMapping",
		sizeof(FConfigActionKeyMapping),
		alignof(FConfigActionKeyMapping),
		Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConfigActionKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConfigActionKeyMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConfigActionKeyMapping"), sizeof(FConfigActionKeyMapping), Get_Z_Construct_UScriptStruct_FConfigActionKeyMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConfigActionKeyMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConfigActionKeyMapping_Hash() { return 4208951956U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
