// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/Misc/AutoSettingsInputProjectConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInputProjectConfig() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputProjectConfig_NoRegister();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputProjectConfig();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfig();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAutoSettingsInputProjectConfig::execLoadKeyIcons)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_KeyIconTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTexture*>*)Z_Param__Result=UAutoSettingsInputProjectConfig::LoadKeyIcons(Z_Param_KeyIconTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoSettingsInputProjectConfig::execGetKeyGroupStatic)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UAutoSettingsInputProjectConfig::GetKeyGroupStatic(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoSettingsInputProjectConfig::execGetKeyFriendlyNameStatic)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAutoSettingsInputProjectConfig::GetKeyFriendlyNameStatic(Z_Param_Key);
		P_NATIVE_END;
	}
	void UAutoSettingsInputProjectConfig::StaticRegisterNativesUAutoSettingsInputProjectConfig()
	{
		UClass* Class = UAutoSettingsInputProjectConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKeyFriendlyNameStatic", &UAutoSettingsInputProjectConfig::execGetKeyFriendlyNameStatic },
			{ "GetKeyGroupStatic", &UAutoSettingsInputProjectConfig::execGetKeyGroupStatic },
			{ "LoadKeyIcons", &UAutoSettingsInputProjectConfig::execLoadKeyIcons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics
	{
		struct AutoSettingsInputProjectConfig_eventGetKeyFriendlyNameStatic_Parms
		{
			FKey Key;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventGetKeyFriendlyNameStatic_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventGetKeyFriendlyNameStatic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Auto Settings Config" },
		{ "Comment", "// Returns the key group that contains the given key\n" },
		{ "DisplayName", "Get Key Friendly Name" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputProjectConfig.h" },
		{ "ToolTip", "Returns the key group that contains the given key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsInputProjectConfig, nullptr, "GetKeyFriendlyNameStatic", nullptr, nullptr, sizeof(AutoSettingsInputProjectConfig_eventGetKeyFriendlyNameStatic_Parms), Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics
	{
		struct AutoSettingsInputProjectConfig_eventGetKeyGroupStatic_Parms
		{
			FKey Key;
			FGameplayTag ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventGetKeyGroupStatic_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventGetKeyGroupStatic_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Auto Settings Config" },
		{ "Comment", "// Returns the key group that contains the given key\n" },
		{ "DisplayName", "Get Key Group" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputProjectConfig.h" },
		{ "ToolTip", "Returns the key group that contains the given key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsInputProjectConfig, nullptr, "GetKeyGroupStatic", nullptr, nullptr, sizeof(AutoSettingsInputProjectConfig_eventGetKeyGroupStatic_Parms), Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics
	{
		struct AutoSettingsInputProjectConfig_eventLoadKeyIcons_Parms
		{
			FGameplayTagContainer KeyIconTags;
			TArray<UTexture*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyIconTags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_KeyIconTags = { "KeyIconTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventLoadKeyIcons_Parms, KeyIconTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingsInputProjectConfig_eventLoadKeyIcons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_KeyIconTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Auto Settings Config" },
		{ "Comment", "/**\n\x09 * Synchronously load all key icon textures in any KeyIconSet(s) with all of the given tags\n\x09 * Returns all textures that were loaded, which should be stored as a variable for as long as the textures need to remain loaded\n\x09 */" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputProjectConfig.h" },
		{ "ToolTip", "Synchronously load all key icon textures in any KeyIconSet(s) with all of the given tags\nReturns all textures that were loaded, which should be stored as a variable for as long as the textures need to remain loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingsInputProjectConfig, nullptr, "LoadKeyIcons", nullptr, nullptr, sizeof(AutoSettingsInputProjectConfig_eventLoadKeyIcons_Parms), Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutoSettingsInputProjectConfig_NoRegister()
	{
		return UAutoSettingsInputProjectConfig::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutoSettingsInputConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic, "GetKeyFriendlyNameStatic" }, // 615666412
		{ &Z_Construct_UFunction_UAutoSettingsInputProjectConfig_GetKeyGroupStatic, "GetKeyGroupStatic" }, // 4029792201
		{ &Z_Construct_UFunction_UAutoSettingsInputProjectConfig_LoadKeyIcons, "LoadKeyIcons" }, // 1852313755
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Config Subclass used for the page in project settings\n * This is separate to the base class, so that project settings do not affect the default values of the base class objects (which makes them easier to test)\n */" },
		{ "IncludePath", "Misc/AutoSettingsInputProjectConfig.h" },
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputProjectConfig.h" },
		{ "ToolTip", "Config Subclass used for the page in project settings\nThis is separate to the base class, so that project settings do not affect the default values of the base class objects (which makes them easier to test)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsInputProjectConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::ClassParams = {
		&UAutoSettingsInputProjectConfig::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSettingsInputProjectConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSettingsInputProjectConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSettingsInputProjectConfig, 2091698554);
	template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsInputProjectConfig>()
	{
		return UAutoSettingsInputProjectConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSettingsInputProjectConfig(Z_Construct_UClass_UAutoSettingsInputProjectConfig, &UAutoSettingsInputProjectConfig::StaticClass, TEXT("/Script/AutoSettingsInput"), TEXT("UAutoSettingsInputProjectConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsInputProjectConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
