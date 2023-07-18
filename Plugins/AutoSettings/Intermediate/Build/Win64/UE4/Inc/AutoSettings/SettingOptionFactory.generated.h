// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSettingOption;
#ifdef AUTOSETTINGS_SettingOptionFactory_generated_h
#error "SettingOptionFactory.generated.h already included, missing '#pragma once' in SettingOptionFactory.h"
#endif
#define AUTOSETTINGS_SettingOptionFactory_generated_h

#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_SPARSE_DATA
#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_RPC_WRAPPERS \
	virtual TArray<FSettingOption> ConstructOptions_Implementation() const; \
 \
	DECLARE_FUNCTION(execConstructOptions);


#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<FSettingOption> ConstructOptions_Implementation() const; \
 \
	DECLARE_FUNCTION(execConstructOptions);


#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_EVENT_PARMS \
	struct SettingOptionFactory_eventConstructOptions_Parms \
	{ \
		TArray<FSettingOption> ReturnValue; \
	};


#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_CALLBACK_WRAPPERS
#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingOptionFactory(); \
	friend struct Z_Construct_UClass_USettingOptionFactory_Statics; \
public: \
	DECLARE_CLASS(USettingOptionFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingOptionFactory)


#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSettingOptionFactory(); \
	friend struct Z_Construct_UClass_USettingOptionFactory_Statics; \
public: \
	DECLARE_CLASS(USettingOptionFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AutoSettings"), NO_API) \
	DECLARE_SERIALIZER(USettingOptionFactory)


#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingOptionFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingOptionFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingOptionFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingOptionFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingOptionFactory(USettingOptionFactory&&); \
	NO_API USettingOptionFactory(const USettingOptionFactory&); \
public:


#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingOptionFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingOptionFactory(USettingOptionFactory&&); \
	NO_API USettingOptionFactory(const USettingOptionFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingOptionFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingOptionFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingOptionFactory)


#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_PRIVATE_PROPERTY_OFFSET
#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_11_PROLOG \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_EVENT_PARMS


#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_PRIVATE_PROPERTY_OFFSET \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_SPARSE_DATA \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_RPC_WRAPPERS \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_CALLBACK_WRAPPERS \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_INCLASS \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_PRIVATE_PROPERTY_OFFSET \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_SPARSE_DATA \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_CALLBACK_WRAPPERS \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_INCLASS_NO_PURE_DECLS \
	HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGS_API UClass* StaticClass<class USettingOptionFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HPDice_Plugins_AutoSettings_Source_AutoSettings_Public_Misc_SettingOptionFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
