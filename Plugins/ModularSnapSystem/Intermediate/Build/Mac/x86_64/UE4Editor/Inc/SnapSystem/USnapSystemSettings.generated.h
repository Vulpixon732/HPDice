// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAPSYSTEM_USnapSystemSettings_generated_h
#error "USnapSystemSettings.generated.h already included, missing '#pragma once' in USnapSystemSettings.h"
#endif
#define SNAPSYSTEM_USnapSystemSettings_generated_h

#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_SPARSE_DATA
#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_RPC_WRAPPERS
#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUSnapSystemSettings(); \
	friend struct Z_Construct_UClass_UUSnapSystemSettings_Statics; \
public: \
	DECLARE_CLASS(UUSnapSystemSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnapSystem"), NO_API) \
	DECLARE_SERIALIZER(UUSnapSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUUSnapSystemSettings(); \
	friend struct Z_Construct_UClass_UUSnapSystemSettings_Statics; \
public: \
	DECLARE_CLASS(UUSnapSystemSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnapSystem"), NO_API) \
	DECLARE_SERIALIZER(UUSnapSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUSnapSystemSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUSnapSystemSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUSnapSystemSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUSnapSystemSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUSnapSystemSettings(UUSnapSystemSettings&&); \
	NO_API UUSnapSystemSettings(const UUSnapSystemSettings&); \
public:


#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUSnapSystemSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUSnapSystemSettings(UUSnapSystemSettings&&); \
	NO_API UUSnapSystemSettings(const UUSnapSystemSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUSnapSystemSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUSnapSystemSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUSnapSystemSettings)


#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_30_PROLOG
#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_SPARSE_DATA \
	HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_RPC_WRAPPERS \
	HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_INCLASS \
	HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_SPARSE_DATA \
	HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class USnapSystemSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAPSYSTEM_API UClass* StaticClass<class UUSnapSystemSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SnapSystem_Source_SnapSystem_Public_USnapSystemSettings_h


#define FOREACH_ENUM_ESHOWSOCKETMODE(op) \
	op(EShowSocketMode::Short) \
	op(EShowSocketMode::Normal) \
	op(EShowSocketMode::Full) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
