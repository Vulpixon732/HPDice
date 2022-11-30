// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EmailPlugin/Public/SendEmailLatent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSendEmailLatent() {}
// Cross Module References
	EMAILPLUGIN_API UEnum* Z_Construct_UEnum_EmailPlugin_ESecurityType();
	UPackage* Z_Construct_UPackage__Script_EmailPlugin();
	EMAILPLUGIN_API UEnum* Z_Construct_UEnum_EmailPlugin_ECharSet();
	EMAILPLUGIN_API UEnum* Z_Construct_UEnum_EmailPlugin_EEmailType();
	EMAILPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEmailDetails();
// End Cross Module References
	static UEnum* ESecurityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EmailPlugin_ESecurityType, Z_Construct_UPackage__Script_EmailPlugin(), TEXT("ESecurityType"));
		}
		return Singleton;
	}
	template<> EMAILPLUGIN_API UEnum* StaticEnum<ESecurityType>()
	{
		return ESecurityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESecurityType(ESecurityType_StaticEnum, TEXT("/Script/EmailPlugin"), TEXT("ESecurityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EmailPlugin_ESecurityType_Hash() { return 833119681U; }
	UEnum* Z_Construct_UEnum_EmailPlugin_ESecurityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EmailPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESecurityType"), 0, Get_Z_Construct_UEnum_EmailPlugin_ESecurityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESecurityType::TLS", (int64)ESecurityType::TLS },
				{ "ESecurityType::SSL", (int64)ESecurityType::SSL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
				{ "SSL.Name", "ESecurityType::SSL" },
				{ "TLS.Name", "ESecurityType::TLS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EmailPlugin,
				nullptr,
				"ESecurityType",
				"ESecurityType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECharSet_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EmailPlugin_ECharSet, Z_Construct_UPackage__Script_EmailPlugin(), TEXT("ECharSet"));
		}
		return Singleton;
	}
	template<> EMAILPLUGIN_API UEnum* StaticEnum<ECharSet>()
	{
		return ECharSet_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharSet(ECharSet_StaticEnum, TEXT("/Script/EmailPlugin"), TEXT("ECharSet"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EmailPlugin_ECharSet_Hash() { return 822017367U; }
	UEnum* Z_Construct_UEnum_EmailPlugin_ECharSet()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EmailPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharSet"), 0, Get_Z_Construct_UEnum_EmailPlugin_ECharSet_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharSet::USASCII", (int64)ECharSet::USASCII },
				{ "ECharSet::UTF8", (int64)ECharSet::UTF8 },
				{ "ECharSet::GB2312", (int64)ECharSet::GB2312 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GB2312.Name", "ECharSet::GB2312" },
				{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
				{ "USASCII.Name", "ECharSet::USASCII" },
				{ "UTF8.Name", "ECharSet::UTF8" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EmailPlugin,
				nullptr,
				"ECharSet",
				"ECharSet",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEmailType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EmailPlugin_EEmailType, Z_Construct_UPackage__Script_EmailPlugin(), TEXT("EEmailType"));
		}
		return Singleton;
	}
	template<> EMAILPLUGIN_API UEnum* StaticEnum<EEmailType>()
	{
		return EEmailType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmailType(EEmailType_StaticEnum, TEXT("/Script/EmailPlugin"), TEXT("EEmailType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EmailPlugin_EEmailType_Hash() { return 4237030860U; }
	UEnum* Z_Construct_UEnum_EmailPlugin_EEmailType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EmailPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmailType"), 0, Get_Z_Construct_UEnum_EmailPlugin_EEmailType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEmailType::GMAIL", (int64)EEmailType::GMAIL },
				{ "EEmailType::OUTLOOK", (int64)EEmailType::OUTLOOK },
				{ "EEmailType::YAHOO", (int64)EEmailType::YAHOO },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GMAIL.Name", "EEmailType::GMAIL" },
				{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
				{ "OUTLOOK.Name", "EEmailType::OUTLOOK" },
				{ "YAHOO.Name", "EEmailType::YAHOO" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EmailPlugin,
				nullptr,
				"EEmailType",
				"EEmailType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEmailDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EMAILPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FEmailDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmailDetails, Z_Construct_UPackage__Script_EmailPlugin(), TEXT("EmailDetails"), sizeof(FEmailDetails), Get_Z_Construct_UScriptStruct_FEmailDetails_Hash());
	}
	return Singleton;
}
template<> EMAILPLUGIN_API UScriptStruct* StaticStruct<FEmailDetails>()
{
	return FEmailDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmailDetails(FEmailDetails::StaticStruct, TEXT("/Script/EmailPlugin"), TEXT("EmailDetails"), false, nullptr, nullptr);
static struct FScriptStruct_EmailPlugin_StaticRegisterNativesFEmailDetails
{
	FScriptStruct_EmailPlugin_StaticRegisterNativesFEmailDetails()
	{
		UScriptStruct::DeferCppStructOps<FEmailDetails>(FName(TEXT("EmailDetails")));
	}
} ScriptStruct_EmailPlugin_StaticRegisterNativesFEmailDetails;
	struct Z_Construct_UScriptStruct_FEmailDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHTML_MetaData[];
#endif
		static void NewProp_bUseHTML_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHTML;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmailDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmailDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_SenderEmail_MetaData[] = {
		{ "Category", "Email Plugin" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_SenderEmail = { "SenderEmail", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailDetails, SenderEmail), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_SenderEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_SenderEmail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "Email Plugin" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailDetails, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_SenderName_MetaData[] = {
		{ "Category", "Email Plugin" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailDetails, SenderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_SenderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_SenderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_ReceiverEmail_MetaData[] = {
		{ "Category", "Email Plugin" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_ReceiverEmail = { "ReceiverEmail", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailDetails, ReceiverEmail), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_ReceiverEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_ReceiverEmail_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_CC_Inner = { "CC", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_CC_MetaData[] = {
		{ "Category", "Email Plugin" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_CC = { "CC", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailDetails, CC), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_CC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_CC_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_BCC_Inner = { "BCC", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_BCC_MetaData[] = {
		{ "Category", "Email Plugin" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_BCC = { "BCC", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailDetails, BCC), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_BCC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_BCC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Subject_MetaData[] = {
		{ "Category", "Email Plugin" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailDetails, Subject), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Subject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Email Plugin" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailDetails, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Attachments_MetaData[] = {
		{ "Category", "Email Plugin" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmailDetails, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Attachments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Attachments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_bUseHTML_MetaData[] = {
		{ "Category", "Email Plugin" },
		{ "ModuleRelativePath", "Public/SendEmailLatent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_bUseHTML_SetBit(void* Obj)
	{
		((FEmailDetails*)Obj)->bUseHTML = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_bUseHTML = { "bUseHTML", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEmailDetails), &Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_bUseHTML_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_bUseHTML_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_bUseHTML_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmailDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_SenderEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_SenderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_ReceiverEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_CC_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_CC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_BCC_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_BCC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Attachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_Attachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmailDetails_Statics::NewProp_bUseHTML,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmailDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EmailPlugin,
		nullptr,
		&NewStructOps,
		"EmailDetails",
		sizeof(FEmailDetails),
		alignof(FEmailDetails),
		Z_Construct_UScriptStruct_FEmailDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmailDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmailDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmailDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmailDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EmailPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmailDetails"), sizeof(FEmailDetails), Get_Z_Construct_UScriptStruct_FEmailDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmailDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmailDetails_Hash() { return 1299991250U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
