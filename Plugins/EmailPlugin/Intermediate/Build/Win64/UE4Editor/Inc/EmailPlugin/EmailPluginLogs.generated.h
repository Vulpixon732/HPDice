// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EMAILPLUGIN_EmailPluginLogs_generated_h
#error "EmailPluginLogs.generated.h already included, missing '#pragma once' in EmailPluginLogs.h"
#endif
#define EMAILPLUGIN_EmailPluginLogs_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_EmailPlugin_Source_EmailPlugin_Public_EmailPluginLogs_h


#define FOREACH_ENUM_EEMAILRESULT(op) \
	op(EEmailResult::Success) \
	op(EEmailResult::Fail) \
	op(EEmailResult::None) 

enum class EEmailResult : uint8;
template<> EMAILPLUGIN_API UEnum* StaticEnum<EEmailResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
