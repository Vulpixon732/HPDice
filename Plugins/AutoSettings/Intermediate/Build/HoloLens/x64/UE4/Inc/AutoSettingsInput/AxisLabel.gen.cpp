// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/AxisLabel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisLabel() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAxisLabel_NoRegister();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UAxisLabel();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UInputLabel();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UKeyLabel_NoRegister();
// End Cross Module References
	void UAxisLabel::StaticRegisterNativesUAxisLabel()
	{
	}
	UClass* Z_Construct_UClass_UAxisLabel_NoRegister()
	{
		return UAxisLabel::StaticClass();
	}
	struct Z_Construct_UClass_UAxisLabel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisLabel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputLabel,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisLabel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Label for an input axis on a particular scale\n * Shows the icon for the key it is bound to if available, or falls back to text label\n */" },
		{ "IncludePath", "UI/AxisLabel.h" },
		{ "ModuleRelativePath", "Public/UI/AxisLabel.h" },
		{ "ToolTip", "Label for an input axis on a particular scale\nShows the icon for the key it is bound to if available, or falls back to text label" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisLabel_Statics::NewProp_AxisName_MetaData[] = {
		{ "Category", "Axis Label" },
		{ "Comment", "// Name of the axis to display\n" },
		{ "ModuleRelativePath", "Public/UI/AxisLabel.h" },
		{ "ToolTip", "Name of the axis to display" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAxisLabel_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisLabel, AxisName), METADATA_PARAMS(Z_Construct_UClass_UAxisLabel_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisLabel_Statics::NewProp_AxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisLabel_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Axis Label" },
		{ "Comment", "// Scale of the key to display\n" },
		{ "ModuleRelativePath", "Public/UI/AxisLabel.h" },
		{ "ToolTip", "Scale of the key to display" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisLabel_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisLabel, Scale), METADATA_PARAMS(Z_Construct_UClass_UAxisLabel_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisLabel_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisLabel_Statics::NewProp_KeyLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Axis Label" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AxisLabel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxisLabel_Statics::NewProp_KeyLabel = { "KeyLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisLabel, KeyLabel), Z_Construct_UClass_UKeyLabel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisLabel_Statics::NewProp_KeyLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisLabel_Statics::NewProp_KeyLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxisLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisLabel_Statics::NewProp_AxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisLabel_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisLabel_Statics::NewProp_KeyLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisLabel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisLabel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAxisLabel_Statics::ClassParams = {
		&UAxisLabel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxisLabel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxisLabel_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAxisLabel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisLabel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisLabel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAxisLabel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAxisLabel, 308641255);
	template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UAxisLabel>()
	{
		return UAxisLabel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAxisLabel(Z_Construct_UClass_UAxisLabel, &UAxisLabel::StaticClass, TEXT("/Script/AutoSettingsInput"), TEXT("UAxisLabel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisLabel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
