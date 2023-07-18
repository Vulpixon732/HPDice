// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOSETTINGSINPUT_AutoSettingsInputConfigInterface_generated_h
#error "AutoSettingsInputConfigInterface.generated.h already included, missing '#pragma once' in AutoSettingsInputConfigInterface.h"
#endif
#define AUTOSETTINGSINPUT_AutoSettingsInputConfigInterface_generated_h

#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_SPARSE_DATA
#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_RPC_WRAPPERS
#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoSettingsInputConfigInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSettingsInputConfigInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSettingsInputConfigInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSettingsInputConfigInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoSettingsInputConfigInterface(UAutoSettingsInputConfigInterface&&); \
	NO_API UAutoSettingsInputConfigInterface(const UAutoSettingsInputConfigInterface&); \
public:


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoSettingsInputConfigInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoSettingsInputConfigInterface(UAutoSettingsInputConfigInterface&&); \
	NO_API UAutoSettingsInputConfigInterface(const UAutoSettingsInputConfigInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSettingsInputConfigInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSettingsInputConfigInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSettingsInputConfigInterface)


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAutoSettingsInputConfigInterface(); \
	friend struct Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics; \
public: \
	DECLARE_CLASS(UAutoSettingsInputConfigInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AutoSettingsInput"), NO_API) \
	DECLARE_SERIALIZER(UAutoSettingsInputConfigInterface)


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_GENERATED_UINTERFACE_BODY() \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_GENERATED_UINTERFACE_BODY() \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAutoSettingsInputConfigInterface() {} \
public: \
	typedef UAutoSettingsInputConfigInterface UClassType; \
	typedef IAutoSettingsInputConfigInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IAutoSettingsInputConfigInterface() {} \
public: \
	typedef UAutoSettingsInputConfigInterface UClassType; \
	typedef IAutoSettingsInputConfigInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_14_PROLOG
#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_SPARSE_DATA \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_RPC_WRAPPERS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_SPARSE_DATA \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOSETTINGSINPUT_API UClass* StaticClass<class UAutoSettingsInputConfigInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HPDice_Plugins_AutoSettings_Source_AutoSettingsInput_Public_Misc_AutoSettingsInputConfigInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
