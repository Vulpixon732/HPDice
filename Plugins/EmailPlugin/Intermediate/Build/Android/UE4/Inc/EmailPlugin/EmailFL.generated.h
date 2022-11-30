// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
enum class EEmailType : uint8;
class UEmailDetailsObject;
class UEmailDetailsAsset;
class UObject;
class USceneCaptureComponent2D;
enum class EEmailResult : uint8;
struct FLatentActionInfo;
enum class ECharSet : uint8;
enum class ESecurityType : uint8;
struct FEmailDetails;
#ifdef EMAILPLUGIN_EmailFL_generated_h
#error "EmailFL.generated.h already included, missing '#pragma once' in EmailFL.h"
#endif
#define EMAILPLUGIN_EmailFL_generated_h

#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_SPARSE_DATA
#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAndroidGamePath); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execDoesFileExist); \
	DECLARE_FUNCTION(execConvertToArrayLines); \
	DECLARE_FUNCTION(execGetIMGTagForOnlineEmbeddedAttachment); \
	DECLARE_FUNCTION(execGetIMGTagForEmbeddedAttachment); \
	DECLARE_FUNCTION(execGetHTMLForOnlineEmbeddedAttachment); \
	DECLARE_FUNCTION(execGetHTMLForEmbeddedAttachement); \
	DECLARE_FUNCTION(execMakeEmailDetails); \
	DECLARE_FUNCTION(execGetUsersFromEmailDetailsAsset); \
	DECLARE_FUNCTION(execMakeEmailDetailsFromAsset); \
	DECLARE_FUNCTION(execSaveCaptureComponent2D); \
	DECLARE_FUNCTION(execSendEmailV4); \
	DECLARE_FUNCTION(execSendEmailV3); \
	DECLARE_FUNCTION(execSendEmailV2); \
	DECLARE_FUNCTION(execSendEmail);


#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAndroidGamePath); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execDoesFileExist); \
	DECLARE_FUNCTION(execConvertToArrayLines); \
	DECLARE_FUNCTION(execGetIMGTagForOnlineEmbeddedAttachment); \
	DECLARE_FUNCTION(execGetIMGTagForEmbeddedAttachment); \
	DECLARE_FUNCTION(execGetHTMLForOnlineEmbeddedAttachment); \
	DECLARE_FUNCTION(execGetHTMLForEmbeddedAttachement); \
	DECLARE_FUNCTION(execMakeEmailDetails); \
	DECLARE_FUNCTION(execGetUsersFromEmailDetailsAsset); \
	DECLARE_FUNCTION(execMakeEmailDetailsFromAsset); \
	DECLARE_FUNCTION(execSaveCaptureComponent2D); \
	DECLARE_FUNCTION(execSendEmailV4); \
	DECLARE_FUNCTION(execSendEmailV3); \
	DECLARE_FUNCTION(execSendEmailV2); \
	DECLARE_FUNCTION(execSendEmail);


#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEmailFL(); \
	friend struct Z_Construct_UClass_UEmailFL_Statics; \
public: \
	DECLARE_CLASS(UEmailFL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EmailPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEmailFL)


#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUEmailFL(); \
	friend struct Z_Construct_UClass_UEmailFL_Statics; \
public: \
	DECLARE_CLASS(UEmailFL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EmailPlugin"), NO_API) \
	DECLARE_SERIALIZER(UEmailFL)


#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEmailFL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEmailFL) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEmailFL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEmailFL); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEmailFL(UEmailFL&&); \
	NO_API UEmailFL(const UEmailFL&); \
public:


#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEmailFL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEmailFL(UEmailFL&&); \
	NO_API UEmailFL(const UEmailFL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEmailFL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEmailFL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEmailFL)


#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_24_PROLOG
#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_SPARSE_DATA \
	HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_RPC_WRAPPERS \
	HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_INCLASS \
	HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_SPARSE_DATA \
	HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EMAILPLUGIN_API UClass* StaticClass<class UEmailFL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailFL_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
