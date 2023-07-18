// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCapturedInput;
struct FKey;
struct FGameplayTag;
#ifdef AUTOSETTINGSINPUT_BindCapturePrompt_generated_h
#error "BindCapturePrompt.generated.h already included, missing '#pragma once' in BindCapturePrompt.h"
#endif
#define AUTOSETTINGSINPUT_BindCapturePrompt_generated_h

#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapturedInput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<struct FCapturedInput>();

#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_25_DELEGATE \
struct _Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms \
{ \
	bool bWasCancelled; \
}; \
static inline void FCapturePromptClosedEvent_DelegateWrapper(const FMulticastScriptDelegate& CapturePromptClosedEvent, bool bWasCancelled) \
{ \
	_Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms Parms; \
	Parms.bWasCancelled=bWasCancelled ? true : false; \
	CapturePromptClosedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_23_DELEGATE \
struct _Script_AutoSettingsInput_eventChordRejectedEvent_Parms \
{ \
	FCapturedInput CapturedInput; \
}; \
static inline void FChordRejectedEvent_DelegateWrapper(const FMulticastScriptDelegate& ChordRejectedEvent, FCapturedInput CapturedInput) \
{ \
	_Script_AutoSettingsInput_eventChordRejectedEvent_Parms Parms; \
	Parms.CapturedInput=CapturedInput; \
	ChordRejectedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_21_DELEGATE \
struct _Script_AutoSettingsInput_eventChordCapturedEvent_Parms \
{ \
	FCapturedInput CapturedInput; \
}; \
static inline void FChordCapturedEvent_DelegateWrapper(const FMulticastScriptDelegate& ChordCapturedEvent, FCapturedInput CapturedInput) \
{ \
	_Script_AutoSettingsInput_eventChordCapturedEvent_Parms Parms; \
	Parms.CapturedInput=CapturedInput; \
	ChordCapturedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_SPARSE_DATA
#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_RPC_WRAPPERS \
	virtual bool IsKeyAllowed_Implementation(FKey PrimaryKey); \
 \
	DECLARE_FUNCTION(execIsKeyAllowed); \
	DECLARE_FUNCTION(execGetKeyGroup); \
	DECLARE_FUNCTION(execCancel);


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsKeyAllowed_Implementation(FKey PrimaryKey); \
 \
	DECLARE_FUNCTION(execIsKeyAllowed); \
	DECLARE_FUNCTION(execGetKeyGroup); \
	DECLARE_FUNCTION(execCancel);


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_EVENT_PARMS \
	struct BindCapturePrompt_eventIsKeyAllowed_Parms \
	{ \
		FKey PrimaryKey; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BindCapturePrompt_eventIsKeyAllowed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_CALLBACK_WRAPPERS
#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBindCapturePrompt(); \
	friend struct Z_Construct_UClass_UBindCapturePrompt_Statics; \
public: \
	DECLARE_CLASS(UBindCapturePrompt, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettingsInput"), NO_API) \
	DECLARE_SERIALIZER(UBindCapturePrompt)


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUBindCapturePrompt(); \
	friend struct Z_Construct_UClass_UBindCapturePrompt_Statics; \
public: \
	DECLARE_CLASS(UBindCapturePrompt, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettingsInput"), NO_API) \
	DECLARE_SERIALIZER(UBindCapturePrompt)


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBindCapturePrompt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBindCapturePrompt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBindCapturePrompt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBindCapturePrompt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBindCapturePrompt(UBindCapturePrompt&&); \
	NO_API UBindCapturePrompt(const UBindCapturePrompt&); \
public:


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBindCapturePrompt(UBindCapturePrompt&&); \
	NO_API UBindCapturePrompt(const UBindCapturePrompt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBindCapturePrompt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBindCapturePrompt); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBindCapturePrompt)


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KeysDown() { return STRUCT_OFFSET(UBindCapturePrompt, KeysDown); } \
	FORCEINLINE static uint32 __PPO__PreviousIgnoreInput() { return STRUCT_OFFSET(UBindCapturePrompt, PreviousIgnoreInput); } \
	FORCEINLINE static uint32 __PPO__AccumulatedMouseDelta() { return STRUCT_OFFSET(UBindCapturePrompt, AccumulatedMouseDelta); }


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_39_PROLOG \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_EVENT_PARMS


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_PRIVATE_PROPERTY_OFFSET \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_SPARSE_DATA \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_RPC_WRAPPERS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_CALLBACK_WRAPPERS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_INCLASS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_PRIVATE_PROPERTY_OFFSET \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_SPARSE_DATA \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_CALLBACK_WRAPPERS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_INCLASS_NO_PURE_DECLS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGSINPUT_API UClass* StaticClass<class UBindCapturePrompt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_UI_BindCapturePrompt_h


#define FOREACH_ENUM_EBINDINGCAPTUREMODE(op) \
	op(EBindingCaptureMode::OnReleased) \
	op(EBindingCaptureMode::OnPressed) 

enum class EBindingCaptureMode : uint8;
template<> AUTOSETTINGSINPUT_API UEnum* StaticEnum<EBindingCaptureMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
