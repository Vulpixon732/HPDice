// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInput_init() {}
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature();
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature();
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature();
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature();
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AutoSettingsInput_OnMappingsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AutoSettingsInput_GlobalKeyIconTagsModifiedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/AutoSettingsInput",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x955A2BF2,
				0x0ED134FF,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
