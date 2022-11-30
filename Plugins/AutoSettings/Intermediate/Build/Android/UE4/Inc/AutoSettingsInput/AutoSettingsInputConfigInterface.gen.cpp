// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/Misc/AutoSettingsInputConfigInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsInputConfigInterface() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfigInterface_NoRegister();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAutoSettingsInputConfigInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
// End Cross Module References
	void UAutoSettingsInputConfigInterface::StaticRegisterNativesUAutoSettingsInputConfigInterface()
	{
	}
	UClass* Z_Construct_UClass_UAutoSettingsInputConfigInterface_NoRegister()
	{
		return UAutoSettingsInputConfigInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/AutoSettingsInputConfigInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAutoSettingsInputConfigInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::ClassParams = {
		&UAutoSettingsInputConfigInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSettingsInputConfigInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSettingsInputConfigInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSettingsInputConfigInterface, 1957970898);
	template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAutoSettingsInputConfigInterface>()
	{
		return UAutoSettingsInputConfigInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSettingsInputConfigInterface(Z_Construct_UClass_UAutoSettingsInputConfigInterface, &UAutoSettingsInputConfigInterface::StaticClass, TEXT("/Script/AutoSettingsInput"), TEXT("UAutoSettingsInputConfigInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsInputConfigInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
