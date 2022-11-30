// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EmailPlugin/Public/EmailDetailsAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmailDetailsAsset() {}
// Cross Module References
	EMAILPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUserDetails();
	UPackage* Z_Construct_UPackage__Script_EmailPlugin();
	EMAILPLUGIN_API UEnum* Z_Construct_UEnum_EmailPlugin_EEmailType();
	EMAILPLUGIN_API UClass* Z_Construct_UClass_UEmailDetailsAsset_NoRegister();
	EMAILPLUGIN_API UClass* Z_Construct_UClass_UEmailDetailsAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FUserDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EMAILPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FUserDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserDetails, Z_Construct_UPackage__Script_EmailPlugin(), TEXT("UserDetails"), sizeof(FUserDetails), Get_Z_Construct_UScriptStruct_FUserDetails_Hash());
	}
	return Singleton;
}
template<> EMAILPLUGIN_API UScriptStruct* StaticStruct<FUserDetails>()
{
	return FUserDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserDetails(FUserDetails::StaticStruct, TEXT("/Script/EmailPlugin"), TEXT("UserDetails"), false, nullptr, nullptr);
static struct FScriptStruct_EmailPlugin_StaticRegisterNativesFUserDetails
{
	FScriptStruct_EmailPlugin_StaticRegisterNativesFUserDetails()
	{
		UScriptStruct::DeferCppStructOps<FUserDetails>(FName(TEXT("UserDetails")));
	}
} ScriptStruct_EmailPlugin_StaticRegisterNativesFUserDetails;
	struct Z_Construct_UScriptStruct_FUserDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_User;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmailService_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmailService_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmailService;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EmailDetailsAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_User_MetaData[] = {
		{ "Category", "User Details" },
		{ "ModuleRelativePath", "Public/EmailDetailsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserDetails, User), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_User_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "User Details" },
		{ "ModuleRelativePath", "Public/EmailDetailsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserDetails, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_Password_MetaData[] = {
		{ "Category", "User Details" },
		{ "ModuleRelativePath", "Public/EmailDetailsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserDetails, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_SenderName_MetaData[] = {
		{ "Category", "User Details" },
		{ "ModuleRelativePath", "Public/EmailDetailsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserDetails, SenderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_SenderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_SenderName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_EmailService_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_EmailService_MetaData[] = {
		{ "Category", "User Details" },
		{ "ModuleRelativePath", "Public/EmailDetailsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_EmailService = { "EmailService", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserDetails, EmailService), Z_Construct_UEnum_EmailPlugin_EEmailType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_EmailService_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_EmailService_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_SenderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_EmailService_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserDetails_Statics::NewProp_EmailService,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EmailPlugin,
		nullptr,
		&NewStructOps,
		"UserDetails",
		sizeof(FUserDetails),
		alignof(FUserDetails),
		Z_Construct_UScriptStruct_FUserDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EmailPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserDetails"), sizeof(FUserDetails), Get_Z_Construct_UScriptStruct_FUserDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserDetails_Hash() { return 2003230671U; }
	void UEmailDetailsAsset::StaticRegisterNativesUEmailDetailsAsset()
	{
	}
	UClass* Z_Construct_UClass_UEmailDetailsAsset_NoRegister()
	{
		return UEmailDetailsAsset::StaticClass();
	}
	struct Z_Construct_UClass_UEmailDetailsAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDetailsList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDetailsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserDetailsList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmailDetailsAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EmailPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EmailDetailsAsset.h" },
		{ "ModuleRelativePath", "Public/EmailDetailsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEmailDetailsAsset_Statics::NewProp_UserDetailsList_Inner = { "UserDetailsList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUserDetails, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailDetailsAsset_Statics::NewProp_UserDetailsList_MetaData[] = {
		{ "Category", "User Details" },
		{ "ModuleRelativePath", "Public/EmailDetailsAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEmailDetailsAsset_Statics::NewProp_UserDetailsList = { "UserDetailsList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEmailDetailsAsset, UserDetailsList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsAsset_Statics::NewProp_UserDetailsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsAsset_Statics::NewProp_UserDetailsList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEmailDetailsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsAsset_Statics::NewProp_UserDetailsList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEmailDetailsAsset_Statics::NewProp_UserDetailsList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmailDetailsAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmailDetailsAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEmailDetailsAsset_Statics::ClassParams = {
		&UEmailDetailsAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEmailDetailsAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEmailDetailsAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailDetailsAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmailDetailsAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEmailDetailsAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEmailDetailsAsset, 3212284473);
	template<> EMAILPLUGIN_API UClass* StaticClass<UEmailDetailsAsset>()
	{
		return UEmailDetailsAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmailDetailsAsset(Z_Construct_UClass_UEmailDetailsAsset, &UEmailDetailsAsset::StaticClass, TEXT("/Script/EmailPlugin"), TEXT("UEmailDetailsAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmailDetailsAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
