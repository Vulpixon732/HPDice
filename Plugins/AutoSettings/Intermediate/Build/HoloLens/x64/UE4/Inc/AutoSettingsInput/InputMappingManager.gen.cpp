// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/InputMappingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingManager() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputMappingManager_NoRegister();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputMappingManager();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingPreset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInputMappings();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics
	{
		struct _Script_AutoSettingsInput_eventOnMappingsChanged_Parms
		{
			APlayerController* Player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AutoSettingsInput_eventOnMappingsChanged_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput, nullptr, "OnMappingsChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoSettingsInput_eventOnMappingsChanged_Parms), Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UInputMappingManager::execOnRegisteredPlayerControllerDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRegisteredPlayerControllerDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execGetPlayerMappingsByKey)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_TARRAY_REF(FInputActionKeyMapping,Z_Param_Out_Actions);
		P_GET_TARRAY_REF(FInputAxisKeyMapping,Z_Param_Out_Axes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerMappingsByKey(Z_Param_Player,Z_Param_Key,Z_Param_Out_Actions,Z_Param_Out_Axes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execGetPlayerAxisMappings)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
		P_GET_STRUCT(FGameplayTag,Z_Param_KeyGroup);
		P_GET_UBOOL(Z_Param_bUsePlayerKeyGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInputAxisKeyMapping>*)Z_Param__Result=P_THIS->GetPlayerAxisMappings(Z_Param_Player,Z_Param_AxisName,Z_Param_Scale,Z_Param_MappingGroup,Z_Param_KeyGroup,Z_Param_bUsePlayerKeyGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execGetPlayerActionMappings)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
		P_GET_STRUCT(FGameplayTag,Z_Param_KeyGroup);
		P_GET_UBOOL(Z_Param_bUsePlayerKeyGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInputActionKeyMapping>*)Z_Param__Result=P_THIS->GetPlayerActionMappings(Z_Param_Player,Z_Param_ActionName,Z_Param_MappingGroup,Z_Param_KeyGroup,Z_Param_bUsePlayerKeyGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execGetPlayerAxisMapping)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
		P_GET_STRUCT(FGameplayTag,Z_Param_KeyGroup);
		P_GET_UBOOL(Z_Param_bUsePlayerKeyGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputAxisKeyMapping*)Z_Param__Result=P_THIS->GetPlayerAxisMapping(Z_Param_Player,Z_Param_AxisName,Z_Param_Scale,Z_Param_MappingGroup,Z_Param_KeyGroup,Z_Param_bUsePlayerKeyGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execGetPlayerActionMapping)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
		P_GET_STRUCT(FGameplayTag,Z_Param_KeyGroup);
		P_GET_UBOOL(Z_Param_bUsePlayerKeyGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionKeyMapping*)Z_Param__Result=P_THIS->GetPlayerActionMapping(Z_Param_Player,Z_Param_ActionName,Z_Param_MappingGroup,Z_Param_KeyGroup,Z_Param_bUsePlayerKeyGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execAddPlayerAxisOverride)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_NewMapping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
		P_GET_UBOOL(Z_Param_bAnyKeyGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPlayerAxisOverride(Z_Param_Player,Z_Param_Out_NewMapping,Z_Param_MappingGroup,Z_Param_bAnyKeyGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execAddPlayerActionOverride)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_NewMapping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
		P_GET_UBOOL(Z_Param_bAnyKeyGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPlayerActionOverride(Z_Param_Player,Z_Param_Out_NewMapping,Z_Param_MappingGroup,Z_Param_bAnyKeyGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execGetPlayerAxisMappingStatic)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputAxisKeyMapping*)Z_Param__Result=UInputMappingManager::GetPlayerAxisMappingStatic(Z_Param_Player,Z_Param_AxisName,Z_Param_Scale,Z_Param_MappingGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execGetPlayerActionMappingStatic)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionKeyMapping*)Z_Param__Result=UInputMappingManager::GetPlayerActionMappingStatic(Z_Param_Player,Z_Param_ActionName,Z_Param_MappingGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execInitializePlayerInputOverridesStatic)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInputMappingManager::InitializePlayerInputOverridesStatic(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execAddPlayerAxisOverrideStatic)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_NewMapping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
		P_GET_UBOOL(Z_Param_bAnyKeyGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInputMappingManager::AddPlayerAxisOverrideStatic(Z_Param_Player,Z_Param_Out_NewMapping,Z_Param_MappingGroup,Z_Param_bAnyKeyGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execAddPlayerActionOverrideStatic)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_NewMapping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MappingGroup);
		P_GET_UBOOL(Z_Param_bAnyKeyGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInputMappingManager::AddPlayerActionOverrideStatic(Z_Param_Player,Z_Param_Out_NewMapping,Z_Param_MappingGroup,Z_Param_bAnyKeyGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execSetPlayerKeyGroupStatic)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT(FGameplayTag,Z_Param_KeyGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInputMappingManager::SetPlayerKeyGroupStatic(Z_Param_Player,Z_Param_KeyGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execSetPlayerInputPresetByTag)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT(FGameplayTag,Z_Param_PresetTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInputMappingManager::SetPlayerInputPresetByTag(Z_Param_Player,Z_Param_PresetTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execSetPlayerInputPresetStatic)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_STRUCT(FInputMappingPreset,Z_Param_Preset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInputMappingManager::SetPlayerInputPresetStatic(Z_Param_Player,Z_Param_Preset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execGetPlayerInputMappingsStatic)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerInputMappings*)Z_Param__Result=UInputMappingManager::GetPlayerInputMappingsStatic(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputMappingManager::execGetDefaultInputPresets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInputMappingPreset>*)Z_Param__Result=UInputMappingManager::GetDefaultInputPresets();
		P_NATIVE_END;
	}
	void UInputMappingManager::StaticRegisterNativesUInputMappingManager()
	{
		UClass* Class = UInputMappingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlayerActionOverride", &UInputMappingManager::execAddPlayerActionOverride },
			{ "AddPlayerActionOverrideStatic", &UInputMappingManager::execAddPlayerActionOverrideStatic },
			{ "AddPlayerAxisOverride", &UInputMappingManager::execAddPlayerAxisOverride },
			{ "AddPlayerAxisOverrideStatic", &UInputMappingManager::execAddPlayerAxisOverrideStatic },
			{ "GetDefaultInputPresets", &UInputMappingManager::execGetDefaultInputPresets },
			{ "GetPlayerActionMapping", &UInputMappingManager::execGetPlayerActionMapping },
			{ "GetPlayerActionMappings", &UInputMappingManager::execGetPlayerActionMappings },
			{ "GetPlayerActionMappingStatic", &UInputMappingManager::execGetPlayerActionMappingStatic },
			{ "GetPlayerAxisMapping", &UInputMappingManager::execGetPlayerAxisMapping },
			{ "GetPlayerAxisMappings", &UInputMappingManager::execGetPlayerAxisMappings },
			{ "GetPlayerAxisMappingStatic", &UInputMappingManager::execGetPlayerAxisMappingStatic },
			{ "GetPlayerInputMappingsStatic", &UInputMappingManager::execGetPlayerInputMappingsStatic },
			{ "GetPlayerMappingsByKey", &UInputMappingManager::execGetPlayerMappingsByKey },
			{ "InitializePlayerInputOverridesStatic", &UInputMappingManager::execInitializePlayerInputOverridesStatic },
			{ "OnRegisteredPlayerControllerDestroyed", &UInputMappingManager::execOnRegisteredPlayerControllerDestroyed },
			{ "SetPlayerInputPresetByTag", &UInputMappingManager::execSetPlayerInputPresetByTag },
			{ "SetPlayerInputPresetStatic", &UInputMappingManager::execSetPlayerInputPresetStatic },
			{ "SetPlayerKeyGroupStatic", &UInputMappingManager::execSetPlayerKeyGroupStatic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics
	{
		struct InputMappingManager_eventAddPlayerActionOverride_Parms
		{
			APlayerController* Player;
			FInputActionKeyMapping NewMapping;
			int32 MappingGroup;
			bool bAnyKeyGroup;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMapping;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static void NewProp_bAnyKeyGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnyKeyGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverride_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_NewMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_NewMapping = { "NewMapping", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverride_Parms, NewMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_NewMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_NewMapping_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverride_Parms, MappingGroup), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_bAnyKeyGroup_SetBit(void* Obj)
	{
		((InputMappingManager_eventAddPlayerActionOverride_Parms*)Obj)->bAnyKeyGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_bAnyKeyGroup = { "bAnyKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputMappingManager_eventAddPlayerActionOverride_Parms), &Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_bAnyKeyGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_NewMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_MappingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::NewProp_bAnyKeyGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Override a player's action mapping on the given mapping group and save to config\n// @param\x09""bAnyKeyGroup\x09If true will replace existing mappings on any key group instead of just the key group of the mapping specified.\n" },
		{ "CPP_Default_bAnyKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Override a player's action mapping on the given mapping group and save to config\n@param        bAnyKeyGroup    If true will replace existing mappings on any key group instead of just the key group of the mapping specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "AddPlayerActionOverride", nullptr, nullptr, sizeof(InputMappingManager_eventAddPlayerActionOverride_Parms), Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics
	{
		struct InputMappingManager_eventAddPlayerActionOverrideStatic_Parms
		{
			APlayerController* Player;
			FInputActionKeyMapping NewMapping;
			int32 MappingGroup;
			bool bAnyKeyGroup;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMapping;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static void NewProp_bAnyKeyGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnyKeyGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverrideStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_NewMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_NewMapping = { "NewMapping", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverrideStatic_Parms, NewMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_NewMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_NewMapping_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerActionOverrideStatic_Parms, MappingGroup), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_bAnyKeyGroup_SetBit(void* Obj)
	{
		((InputMappingManager_eventAddPlayerActionOverrideStatic_Parms*)Obj)->bAnyKeyGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_bAnyKeyGroup = { "bAnyKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputMappingManager_eventAddPlayerActionOverrideStatic_Parms), &Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_bAnyKeyGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_NewMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_MappingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::NewProp_bAnyKeyGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Override a player's action mapping on the given mapping group and save to config\n// @param bAnyKeyGroup If true will replace existing mappings on any key group instead of just the key group of the mapping specified.\n" },
		{ "CPP_Default_bAnyKeyGroup", "false" },
		{ "DisplayName", "Add Player Input Action Override" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Override a player's action mapping on the given mapping group and save to config\n@param bAnyKeyGroup If true will replace existing mappings on any key group instead of just the key group of the mapping specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "AddPlayerActionOverrideStatic", nullptr, nullptr, sizeof(InputMappingManager_eventAddPlayerActionOverrideStatic_Parms), Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics
	{
		struct InputMappingManager_eventAddPlayerAxisOverride_Parms
		{
			APlayerController* Player;
			FInputAxisKeyMapping NewMapping;
			int32 MappingGroup;
			bool bAnyKeyGroup;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMapping;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static void NewProp_bAnyKeyGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnyKeyGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverride_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_NewMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_NewMapping = { "NewMapping", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverride_Parms, NewMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_NewMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_NewMapping_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverride_Parms, MappingGroup), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_bAnyKeyGroup_SetBit(void* Obj)
	{
		((InputMappingManager_eventAddPlayerAxisOverride_Parms*)Obj)->bAnyKeyGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_bAnyKeyGroup = { "bAnyKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputMappingManager_eventAddPlayerAxisOverride_Parms), &Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_bAnyKeyGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_NewMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_MappingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::NewProp_bAnyKeyGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Override a player's axis mapping on the given mapping group\n// @param\x09""bAnyKeyGroup\x09If true will replace existing mappings on any key group instead of just the key group of the mapping specified.\n" },
		{ "CPP_Default_bAnyKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Override a player's axis mapping on the given mapping group\n@param        bAnyKeyGroup    If true will replace existing mappings on any key group instead of just the key group of the mapping specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "AddPlayerAxisOverride", nullptr, nullptr, sizeof(InputMappingManager_eventAddPlayerAxisOverride_Parms), Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics
	{
		struct InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms
		{
			APlayerController* Player;
			FInputAxisKeyMapping NewMapping;
			int32 MappingGroup;
			bool bAnyKeyGroup;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMapping;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static void NewProp_bAnyKeyGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnyKeyGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_NewMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_NewMapping = { "NewMapping", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms, NewMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_NewMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_NewMapping_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms, MappingGroup), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_bAnyKeyGroup_SetBit(void* Obj)
	{
		((InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms*)Obj)->bAnyKeyGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_bAnyKeyGroup = { "bAnyKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms), &Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_bAnyKeyGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_NewMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_MappingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::NewProp_bAnyKeyGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Override a player's axis mapping on the given mapping group\n// @param bAnyKeyGroup If true will replace existing mappings on any key group instead of just the key group of the mapping specified.\n" },
		{ "CPP_Default_bAnyKeyGroup", "false" },
		{ "DisplayName", "Add Player Input Axis Override" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Override a player's axis mapping on the given mapping group\n@param bAnyKeyGroup If true will replace existing mappings on any key group instead of just the key group of the mapping specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "AddPlayerAxisOverrideStatic", nullptr, nullptr, sizeof(InputMappingManager_eventAddPlayerAxisOverrideStatic_Parms), Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics
	{
		struct InputMappingManager_eventGetDefaultInputPresets_Parms
		{
			TArray<FInputMappingPreset> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputMappingPreset, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetDefaultInputPresets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Get input presets defined in project settings (AutoSettings page)\n" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Get input presets defined in project settings (AutoSettings page)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetDefaultInputPresets", nullptr, nullptr, sizeof(InputMappingManager_eventGetDefaultInputPresets_Parms), Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics
	{
		struct InputMappingManager_eventGetPlayerActionMapping_Parms
		{
			APlayerController* Player;
			FName ActionName;
			int32 MappingGroup;
			FGameplayTag KeyGroup;
			bool bUsePlayerKeyGroup;
			FInputActionKeyMapping ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
		static void NewProp_bUsePlayerKeyGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerKeyGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMapping_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMapping_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMapping_Parms, MappingGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMapping_Parms, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_bUsePlayerKeyGroup_SetBit(void* Obj)
	{
		((InputMappingManager_eventGetPlayerActionMapping_Parms*)Obj)->bUsePlayerKeyGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_bUsePlayerKeyGroup = { "bUsePlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputMappingManager_eventGetPlayerActionMapping_Parms), &Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_bUsePlayerKeyGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMapping_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_MappingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_KeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_bUsePlayerKeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mapping used for the given action\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available.\n" },
		{ "CPP_Default_bUsePlayerKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mapping used for the given action\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerActionMapping", nullptr, nullptr, sizeof(InputMappingManager_eventGetPlayerActionMapping_Parms), Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics
	{
		struct InputMappingManager_eventGetPlayerActionMappings_Parms
		{
			APlayerController* Player;
			FName ActionName;
			int32 MappingGroup;
			FGameplayTag KeyGroup;
			bool bUsePlayerKeyGroup;
			TArray<FInputActionKeyMapping> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
		static void NewProp_bUsePlayerKeyGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerKeyGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappings_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappings_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappings_Parms, MappingGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappings_Parms, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_bUsePlayerKeyGroup_SetBit(void* Obj)
	{
		((InputMappingManager_eventGetPlayerActionMappings_Parms*)Obj)->bUsePlayerKeyGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_bUsePlayerKeyGroup = { "bUsePlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputMappingManager_eventGetPlayerActionMappings_Parms), &Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_bUsePlayerKeyGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_MappingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_KeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_bUsePlayerKeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mappings used for the given action\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will search all mapping groups.\n" },
		{ "CPP_Default_bUsePlayerKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mappings used for the given action\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will search all mapping groups." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerActionMappings", nullptr, nullptr, sizeof(InputMappingManager_eventGetPlayerActionMappings_Parms), Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics
	{
		struct InputMappingManager_eventGetPlayerActionMappingStatic_Parms
		{
			APlayerController* Player;
			FName ActionName;
			int32 MappingGroup;
			FInputActionKeyMapping ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappingStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappingStatic_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappingStatic_Parms, MappingGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerActionMappingStatic_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_ActionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_MappingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mapping used for the given action\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available.\n" },
		{ "CPP_Default_MappingGroup", "-1" },
		{ "DisplayName", "Get Player Action Mapping" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mapping used for the given action\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerActionMappingStatic", nullptr, nullptr, sizeof(InputMappingManager_eventGetPlayerActionMappingStatic_Parms), Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics
	{
		struct InputMappingManager_eventGetPlayerAxisMapping_Parms
		{
			APlayerController* Player;
			FName AxisName;
			float Scale;
			int32 MappingGroup;
			FGameplayTag KeyGroup;
			bool bUsePlayerKeyGroup;
			FInputAxisKeyMapping ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
		static void NewProp_bUsePlayerKeyGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerKeyGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, AxisName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, MappingGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_bUsePlayerKeyGroup_SetBit(void* Obj)
	{
		((InputMappingManager_eventGetPlayerAxisMapping_Parms*)Obj)->bUsePlayerKeyGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_bUsePlayerKeyGroup = { "bUsePlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputMappingManager_eventGetPlayerAxisMapping_Parms), &Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_bUsePlayerKeyGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMapping_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_MappingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_KeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_bUsePlayerKeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mapping used for the given axis and scale\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available.\n" },
		{ "CPP_Default_bUsePlayerKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mapping used for the given axis and scale\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerAxisMapping", nullptr, nullptr, sizeof(InputMappingManager_eventGetPlayerAxisMapping_Parms), Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics
	{
		struct InputMappingManager_eventGetPlayerAxisMappings_Parms
		{
			APlayerController* Player;
			FName AxisName;
			float Scale;
			int32 MappingGroup;
			FGameplayTag KeyGroup;
			bool bUsePlayerKeyGroup;
			TArray<FInputAxisKeyMapping> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
		static void NewProp_bUsePlayerKeyGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlayerKeyGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, AxisName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, MappingGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_bUsePlayerKeyGroup_SetBit(void* Obj)
	{
		((InputMappingManager_eventGetPlayerAxisMappings_Parms*)Obj)->bUsePlayerKeyGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_bUsePlayerKeyGroup = { "bUsePlayerKeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputMappingManager_eventGetPlayerAxisMappings_Parms), &Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_bUsePlayerKeyGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_MappingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_KeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_bUsePlayerKeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mappings used for the given axis and scale\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will search all mapping groups.\n" },
		{ "CPP_Default_bUsePlayerKeyGroup", "false" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mappings used for the given axis and scale\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will search all mapping groups." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerAxisMappings", nullptr, nullptr, sizeof(InputMappingManager_eventGetPlayerAxisMappings_Parms), Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics
	{
		struct InputMappingManager_eventGetPlayerAxisMappingStatic_Parms
		{
			APlayerController* Player;
			FName AxisName;
			float Scale;
			int32 MappingGroup;
			FInputAxisKeyMapping ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MappingGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms, AxisName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_MappingGroup = { "MappingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms, MappingGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_MappingGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Returns the mapping used for the given axis and scale\n// @param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available.\n" },
		{ "CPP_Default_MappingGroup", "-1" },
		{ "DisplayName", "Get Player Axis Mapping" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Returns the mapping used for the given axis and scale\n@param MappingGroup Mapping group index - if an input has multiple mappings, this will determine which one to use. A value of -1 will use the first mapping group available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerAxisMappingStatic", nullptr, nullptr, sizeof(InputMappingManager_eventGetPlayerAxisMappingStatic_Parms), Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics
	{
		struct InputMappingManager_eventGetPlayerInputMappingsStatic_Parms
		{
			APlayerController* Player;
			FPlayerInputMappings ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerInputMappingsStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerInputMappingsStatic_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerInputMappings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Get input mappings for player\n// Static version\n" },
		{ "DisplayName", "Get Player Input Mappings" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Get input mappings for player\nStatic version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerInputMappingsStatic", nullptr, nullptr, sizeof(InputMappingManager_eventGetPlayerInputMappingsStatic_Parms), Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics
	{
		struct InputMappingManager_eventGetPlayerMappingsByKey_Parms
		{
			APlayerController* Player;
			FKey Key;
			TArray<FInputActionKeyMapping> Actions;
			TArray<FInputAxisKeyMapping> Axes;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Actions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Axes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerMappingsByKey_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerMappingsByKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerMappingsByKey_Parms, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Axes_Inner = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventGetPlayerMappingsByKey_Parms, Axes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Actions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Actions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Axes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::NewProp_Axes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Finds any mappings that use the specified Key\n" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Finds any mappings that use the specified Key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "GetPlayerMappingsByKey", nullptr, nullptr, sizeof(InputMappingManager_eventGetPlayerMappingsByKey_Parms), Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics
	{
		struct InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms
		{
			APlayerController* Player;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms), &Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Initialize a player's input overrides manually\n// This is what sets the saved input mappings on the Player Controller itself\n// If Auto Initialize Player Input Overrides is true in project settings, this is called automatically\n" },
		{ "DisplayName", "Initialize Player Input Overrides" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Initialize a player's input overrides manually\nThis is what sets the saved input mappings on the Player Controller itself\nIf Auto Initialize Player Input Overrides is true in project settings, this is called automatically" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "InitializePlayerInputOverridesStatic", nullptr, nullptr, sizeof(InputMappingManager_eventInitializePlayerInputOverridesStatic_Parms), Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics
	{
		struct InputMappingManager_eventOnRegisteredPlayerControllerDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventOnRegisteredPlayerControllerDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "OnRegisteredPlayerControllerDestroyed", nullptr, nullptr, sizeof(InputMappingManager_eventOnRegisteredPlayerControllerDestroyed_Parms), Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics
	{
		struct InputMappingManager_eventSetPlayerInputPresetByTag_Parms
		{
			APlayerController* Player;
			FGameplayTag PresetTag;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresetTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerInputPresetByTag_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::NewProp_PresetTag = { "PresetTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerInputPresetByTag_Parms, PresetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::NewProp_PresetTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Set a player's input mapping preset by tag\n// Presets and tags are defined in project settings (AutoSettings page)\n// Static version\n" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Set a player's input mapping preset by tag\nPresets and tags are defined in project settings (AutoSettings page)\nStatic version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "SetPlayerInputPresetByTag", nullptr, nullptr, sizeof(InputMappingManager_eventSetPlayerInputPresetByTag_Parms), Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics
	{
		struct InputMappingManager_eventSetPlayerInputPresetStatic_Parms
		{
			APlayerController* Player;
			FInputMappingPreset Preset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerInputPresetStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerInputPresetStatic_Parms, Preset), Z_Construct_UScriptStruct_FInputMappingPreset, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::NewProp_Preset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Set a player's input mapping preset\n// Static version\n" },
		{ "DisplayName", "Set Player Input Preset" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Set a player's input mapping preset\nStatic version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "SetPlayerInputPresetStatic", nullptr, nullptr, sizeof(InputMappingManager_eventSetPlayerInputPresetStatic_Parms), Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics
	{
		struct InputMappingManager_eventSetPlayerKeyGroupStatic_Parms
		{
			APlayerController* Player;
			FGameplayTag KeyGroup;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerKeyGroupStatic_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputMappingManager_eventSetPlayerKeyGroupStatic_Parms, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::NewProp_KeyGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Mapping" },
		{ "Comment", "// Set key group used to retrieve active mappings for a player\n// Useful for globally switching prompts between key groups when for example input device is changed\n" },
		{ "DisplayName", "Set Player Input Key Group" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Set key group used to retrieve active mappings for a player\nUseful for globally switching prompts between key groups when for example input device is changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputMappingManager, nullptr, "SetPlayerKeyGroupStatic", nullptr, nullptr, sizeof(InputMappingManager_eventSetPlayerKeyGroupStatic_Parms), Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputMappingManager_NoRegister()
	{
		return UInputMappingManager::StaticClass();
	}
	struct Z_Construct_UClass_UInputMappingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMappingsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMappingsChanged;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInputOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInputOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerInputOverrides;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisteredPlayerControllers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredPlayerControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredPlayerControllers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputMappingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputMappingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverride, "AddPlayerActionOverride" }, // 422979765
		{ &Z_Construct_UFunction_UInputMappingManager_AddPlayerActionOverrideStatic, "AddPlayerActionOverrideStatic" }, // 3014260663
		{ &Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverride, "AddPlayerAxisOverride" }, // 2701982930
		{ &Z_Construct_UFunction_UInputMappingManager_AddPlayerAxisOverrideStatic, "AddPlayerAxisOverrideStatic" }, // 1233922552
		{ &Z_Construct_UFunction_UInputMappingManager_GetDefaultInputPresets, "GetDefaultInputPresets" }, // 3144553487
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMapping, "GetPlayerActionMapping" }, // 1400449632
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappings, "GetPlayerActionMappings" }, // 1217714327
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerActionMappingStatic, "GetPlayerActionMappingStatic" }, // 1573528460
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMapping, "GetPlayerAxisMapping" }, // 3227206056
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappings, "GetPlayerAxisMappings" }, // 1287668752
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerAxisMappingStatic, "GetPlayerAxisMappingStatic" }, // 2875971742
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerInputMappingsStatic, "GetPlayerInputMappingsStatic" }, // 1821686893
		{ &Z_Construct_UFunction_UInputMappingManager_GetPlayerMappingsByKey, "GetPlayerMappingsByKey" }, // 2329057668
		{ &Z_Construct_UFunction_UInputMappingManager_InitializePlayerInputOverridesStatic, "InitializePlayerInputOverridesStatic" }, // 2576000936
		{ &Z_Construct_UFunction_UInputMappingManager_OnRegisteredPlayerControllerDestroyed, "OnRegisteredPlayerControllerDestroyed" }, // 3847046204
		{ &Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetByTag, "SetPlayerInputPresetByTag" }, // 573943261
		{ &Z_Construct_UFunction_UInputMappingManager_SetPlayerInputPresetStatic, "SetPlayerInputPresetStatic" }, // 3070895347
		{ &Z_Construct_UFunction_UInputMappingManager_SetPlayerKeyGroupStatic, "SetPlayerKeyGroupStatic" }, // 3966765141
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMappingManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Manages input mapping for players\n */" },
		{ "IncludePath", "InputMappingManager.h" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Manages input mapping for players" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMappingManager_Statics::NewProp_OnMappingsChanged_MetaData[] = {
		{ "Comment", "// Fired when any local player's input mappings are updated\n" },
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
		{ "ToolTip", "Fired when any local player's input mappings are updated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInputMappingManager_Statics::NewProp_OnMappingsChanged = { "OnMappingsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputMappingManager, OnMappingsChanged), Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInputMappingManager_Statics::NewProp_OnMappingsChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingManager_Statics::NewProp_OnMappingsChanged_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides_Inner = { "PlayerInputOverrides", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerInputMappings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides = { "PlayerInputOverrides", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputMappingManager, PlayerInputOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers_Inner = { "RegisteredPlayerControllers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputMappingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers = { "RegisteredPlayerControllers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputMappingManager, RegisteredPlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputMappingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingManager_Statics::NewProp_OnMappingsChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingManager_Statics::NewProp_PlayerInputOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingManager_Statics::NewProp_RegisteredPlayerControllers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputMappingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputMappingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputMappingManager_Statics::ClassParams = {
		&UInputMappingManager::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputMappingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInputMappingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputMappingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputMappingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputMappingManager, 788581919);
	template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UInputMappingManager>()
	{
		return UInputMappingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputMappingManager(Z_Construct_UClass_UInputMappingManager, &UInputMappingManager::StaticClass, TEXT("/Script/AutoSettingsInput"), TEXT("UInputMappingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputMappingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
