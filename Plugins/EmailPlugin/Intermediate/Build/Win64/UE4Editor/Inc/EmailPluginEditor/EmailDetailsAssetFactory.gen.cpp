// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EmailPluginEditor/Public/EmailDetailsAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmailDetailsAssetFactory() {}
// Cross Module References
	EMAILPLUGINEDITOR_API UClass* Z_Construct_UClass_UEmailDetailsAssetFactory_NoRegister();
	EMAILPLUGINEDITOR_API UClass* Z_Construct_UClass_UEmailDetailsAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EmailPluginEditor();
// End Cross Module References
	void UEmailDetailsAssetFactory::StaticRegisterNativesUEmailDetailsAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UEmailDetailsAssetFactory_NoRegister()
	{
		return UEmailDetailsAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEmailDetailsAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmailDetailsAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EmailPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EmailDetailsAssetFactory.h" },
		{ "ModuleRelativePath", "Public/EmailDetailsAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmailDetailsAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmailDetailsAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEmailDetailsAssetFactory_Statics::ClassParams = {
		&UEmailDetailsAssetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmailDetailsAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEmailDetailsAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEmailDetailsAssetFactory, 378641876);
	template<> EMAILPLUGINEDITOR_API UClass* StaticClass<UEmailDetailsAssetFactory>()
	{
		return UEmailDetailsAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmailDetailsAssetFactory(Z_Construct_UClass_UEmailDetailsAssetFactory, &UEmailDetailsAssetFactory::StaticClass, TEXT("/Script/EmailPluginEditor"), TEXT("UEmailDetailsAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmailDetailsAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
