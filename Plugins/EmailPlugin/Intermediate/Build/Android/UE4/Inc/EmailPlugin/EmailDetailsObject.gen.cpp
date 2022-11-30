// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EmailPlugin/Public/EmailDetailsObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmailDetailsObject() {}
// Cross Module References
	EMAILPLUGIN_API UClass* Z_Construct_UClass_UEmailDetailsObject_NoRegister();
	EMAILPLUGIN_API UClass* Z_Construct_UClass_UEmailDetailsObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EmailPlugin();
	EMAILPLUGIN_API UEnum* Z_Construct_UEnum_EmailPlugin_EEmailType();
// End Cross Module References
	void UEmailDetailsObject::StaticRegisterNativesUEmailDetailsObject()
	{
	}
	UClass* Z_Construct_UClass_UEmailDetailsObject_NoRegister()
	{
		return UEmailDetailsObject::StaticClass();
	}
	struct Z_Construct_UClass_UEmailDetailsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderEmail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderEmail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiverEmail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiverEmail;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CC_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CC_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CC;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BCC_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BCC_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BCC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attachments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attachments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attachments;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmailService_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailService_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmailService;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesHTML_MetaData[];
#endif
		static void NewProp_bUsesHTML_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesHTML;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmailDetailsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EmailPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EmailDetailsObject.h" },
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_SenderEmail_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_SenderEmail = { "SenderEmail", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsObject, SenderEmail), METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_SenderEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_SenderEmail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Password_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsObject, Password), METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_SenderName_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsObject, SenderName), METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_SenderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_SenderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_ReceiverEmail_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_ReceiverEmail = { "ReceiverEmail", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsObject, ReceiverEmail), METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_ReceiverEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_ReceiverEmail_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_CC_Inner = { "CC", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_CC_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_CC = { "CC", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsObject, CC), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_CC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_CC_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_BCC_Inner = { "BCC", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_BCC_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_BCC = { "BCC", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsObject, BCC), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_BCC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_BCC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Subject_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsObject, Subject), METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Subject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsObject, Message), METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Attachments_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsObject, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Attachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Attachments_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_EmailService_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_EmailService_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_EmailService = { "EmailService", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsObject, EmailService), Z_Construct_UEnum_EmailPlugin_EEmailType, METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_EmailService_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_EmailService_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_bUsesHTML_MetaData[] = {
		{ "ModuleRelativePath", "Public/EmailDetailsObject.h" },
	};
#endif
	void Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_bUsesHTML_SetBit(void* Obj)
	{
		((UEmailDetailsObject*)Obj)->bUsesHTML = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_bUsesHTML = { "bUsesHTML", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEmailDetailsObject), &Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_bUsesHTML_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_bUsesHTML_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_bUsesHTML_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEmailDetailsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_SenderEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_SenderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_ReceiverEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_CC_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_CC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_BCC_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_BCC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Attachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_Attachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_EmailService_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_EmailService,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsObject_Statics::NewProp_bUsesHTML,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmailDetailsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmailDetailsObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEmailDetailsObject_Statics::ClassParams = {
		&UEmailDetailsObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEmailDetailsObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmailDetailsObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEmailDetailsObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEmailDetailsObject, 3262685110);
	template<> EMAILPLUGIN_API UClass* StaticClass<UEmailDetailsObject>()
	{
		return UEmailDetailsObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmailDetailsObject(Z_Construct_UClass_UEmailDetailsObject, &UEmailDetailsObject::StaticClass, TEXT("/Script/EmailPlugin"), TEXT("UEmailDetailsObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmailDetailsObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
