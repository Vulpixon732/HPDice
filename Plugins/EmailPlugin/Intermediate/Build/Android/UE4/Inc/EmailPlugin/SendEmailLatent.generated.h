// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EMAILPLUGIN_SendEmailLatent_generated_h
#error "SendEmailLatent.generated.h already included, missing '#pragma once' in SendEmailLatent.h"
#endif
#define EMAILPLUGIN_SendEmailLatent_generated_h

#define HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_SendEmailLatent_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEmailDetails_Statics; \
	EMAILPLUGIN_API static class UScriptStruct* StaticStruct();


template<> EMAILPLUGIN_API UScriptStruct* StaticStruct<struct FEmailDetails>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_SendEmailLatent_h


#define FOREACH_ENUM_ESECURITYTYPE(op) \
	op(ESecurityType::TLS) \
	op(ESecurityType::SSL) 

enum class ESecurityType : uint8;
template<> EMAILPLUGIN_API UEnum* StaticEnum<ESecurityType>();

#define FOREACH_ENUM_ECHARSET(op) \
	op(ECharSet::USASCII) \
	op(ECharSet::UTF8) \
	op(ECharSet::GB2312) 

enum class ECharSet : uint8;
template<> EMAILPLUGIN_API UEnum* StaticEnum<ECharSet>();

#define FOREACH_ENUM_EEMAILTYPE(op) \
	op(EEmailType::GMAIL) \
	op(EEmailType::OUTLOOK) \
	op(EEmailType::YAHOO) 

enum class EEmailType : uint8;
template<> EMAILPLUGIN_API UEnum* StaticEnum<EEmailType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
