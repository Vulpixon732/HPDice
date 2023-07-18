// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AActor;
struct FKey;
struct FInputActionKeyMapping;
struct FInputAxisKeyMapping;
struct FGameplayTag;
struct FInputMappingPreset;
struct FPlayerInputMappings;
#ifdef AUTOSETTINGSINPUT_InputMappingManager_generated_h
#error "InputMappingManager.generated.h already included, missing '#pragma once' in InputMappingManager.h"
#endif
#define AUTOSETTINGSINPUT_InputMappingManager_generated_h

#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_10_DELEGATE \
struct _Script_AutoSettingsInput_eventOnMappingsChanged_Parms \
{ \
	APlayerController* Player; \
}; \
static inline void FOnMappingsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMappingsChanged, APlayerController* Player) \
{ \
	_Script_AutoSettingsInput_eventOnMappingsChanged_Parms Parms; \
	Parms.Player=Player; \
	OnMappingsChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_SPARSE_DATA
#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRegisteredPlayerControllerDestroyed); \
	DECLARE_FUNCTION(execGetPlayerMappingsByKey); \
	DECLARE_FUNCTION(execGetPlayerAxisMappings); \
	DECLARE_FUNCTION(execGetPlayerActionMappings); \
	DECLARE_FUNCTION(execGetPlayerAxisMapping); \
	DECLARE_FUNCTION(execGetPlayerActionMapping); \
	DECLARE_FUNCTION(execAddPlayerAxisOverride); \
	DECLARE_FUNCTION(execAddPlayerActionOverride); \
	DECLARE_FUNCTION(execGetPlayerAxisMappingStatic); \
	DECLARE_FUNCTION(execGetPlayerActionMappingStatic); \
	DECLARE_FUNCTION(execInitializePlayerInputOverridesStatic); \
	DECLARE_FUNCTION(execAddPlayerAxisOverrideStatic); \
	DECLARE_FUNCTION(execAddPlayerActionOverrideStatic); \
	DECLARE_FUNCTION(execSetPlayerKeyGroupStatic); \
	DECLARE_FUNCTION(execSetPlayerInputPresetByTag); \
	DECLARE_FUNCTION(execSetPlayerInputPresetStatic); \
	DECLARE_FUNCTION(execGetPlayerInputMappingsStatic); \
	DECLARE_FUNCTION(execGetDefaultInputPresets);


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRegisteredPlayerControllerDestroyed); \
	DECLARE_FUNCTION(execGetPlayerMappingsByKey); \
	DECLARE_FUNCTION(execGetPlayerAxisMappings); \
	DECLARE_FUNCTION(execGetPlayerActionMappings); \
	DECLARE_FUNCTION(execGetPlayerAxisMapping); \
	DECLARE_FUNCTION(execGetPlayerActionMapping); \
	DECLARE_FUNCTION(execAddPlayerAxisOverride); \
	DECLARE_FUNCTION(execAddPlayerActionOverride); \
	DECLARE_FUNCTION(execGetPlayerAxisMappingStatic); \
	DECLARE_FUNCTION(execGetPlayerActionMappingStatic); \
	DECLARE_FUNCTION(execInitializePlayerInputOverridesStatic); \
	DECLARE_FUNCTION(execAddPlayerAxisOverrideStatic); \
	DECLARE_FUNCTION(execAddPlayerActionOverrideStatic); \
	DECLARE_FUNCTION(execSetPlayerKeyGroupStatic); \
	DECLARE_FUNCTION(execSetPlayerInputPresetByTag); \
	DECLARE_FUNCTION(execSetPlayerInputPresetStatic); \
	DECLARE_FUNCTION(execGetPlayerInputMappingsStatic); \
	DECLARE_FUNCTION(execGetDefaultInputPresets);


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputMappingManager(); \
	friend struct Z_Construct_UClass_UInputMappingManager_Statics; \
public: \
	DECLARE_CLASS(UInputMappingManager, UEngineSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSettingsInput"), NO_API) \
	DECLARE_SERIALIZER(UInputMappingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInputMappingManager(); \
	friend struct Z_Construct_UClass_UInputMappingManager_Statics; \
public: \
	DECLARE_CLASS(UInputMappingManager, UEngineSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutoSettingsInput"), NO_API) \
	DECLARE_SERIALIZER(UInputMappingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputMappingManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputMappingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputMappingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMappingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputMappingManager(UInputMappingManager&&); \
	NO_API UInputMappingManager(const UInputMappingManager&); \
public:


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputMappingManager(UInputMappingManager&&); \
	NO_API UInputMappingManager(const UInputMappingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputMappingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputMappingManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputMappingManager)


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerInputOverrides() { return STRUCT_OFFSET(UInputMappingManager, PlayerInputOverrides); } \
	FORCEINLINE static uint32 __PPO__RegisteredPlayerControllers() { return STRUCT_OFFSET(UInputMappingManager, RegisteredPlayerControllers); }


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_15_PROLOG
#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_PRIVATE_PROPERTY_OFFSET \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_SPARSE_DATA \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_RPC_WRAPPERS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_INCLASS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_PRIVATE_PROPERTY_OFFSET \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_SPARSE_DATA \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_INCLASS_NO_PURE_DECLS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGSINPUT_API UClass* StaticClass<class UInputMappingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_InputMappingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
