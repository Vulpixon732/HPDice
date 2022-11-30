// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EmailPlugin/Public/EmailFL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmailFL() {}
// Cross Module References
	EMAILPLUGIN_API UClass* Z_Construct_UClass_UEmailFL_NoRegister();
	EMAILPLUGIN_API UClass* Z_Construct_UClass_UEmailFL();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EmailPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EMAILPLUGIN_API UClass* Z_Construct_UClass_UEmailDetailsAsset_NoRegister();
	EMAILPLUGIN_API UEnum* Z_Construct_UEnum_EmailPlugin_EEmailType();
	EMAILPLUGIN_API UClass* Z_Construct_UClass_UEmailDetailsObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	EMAILPLUGIN_API UEnum* Z_Construct_UEnum_EmailPlugin_EEmailResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	EMAILPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEmailDetails();
	EMAILPLUGIN_API UEnum* Z_Construct_UEnum_EmailPlugin_ECharSet();
	EMAILPLUGIN_API UEnum* Z_Construct_UEnum_EmailPlugin_ESecurityType();
// End Cross Module References
	DEFINE_FUNCTION(UEmailFL::execGetAndroidGamePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEmailFL::GetAndroidGamePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execDeleteFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEmailFL::DeleteFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execDoesFileExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEmailFL::DoesFileExist(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execConvertToArrayLines)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEmailFL::ConvertToArrayLines(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execGetIMGTagForOnlineEmbeddedAttachment)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEmailFL::GetIMGTagForOnlineEmbeddedAttachment(Z_Param_URL,Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execGetIMGTagForEmbeddedAttachment)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Attachment);
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEmailFL::GetIMGTagForEmbeddedAttachment(Z_Param_Attachment,Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execGetHTMLForOnlineEmbeddedAttachment)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSpacesBeforePic);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSpacesAfterPic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEmailFL::GetHTMLForOnlineEmbeddedAttachment(Z_Param_URL,Z_Param_Size,Z_Param_NumSpacesBeforePic,Z_Param_NumSpacesAfterPic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execGetHTMLForEmbeddedAttachement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Attachment);
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSpacesBeforePic);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSpacesAfterPic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEmailFL::GetHTMLForEmbeddedAttachement(Z_Param_Attachment,Z_Param_Size,Z_Param_NumSpacesBeforePic,Z_Param_NumSpacesAfterPic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execMakeEmailDetails)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SenderEmail);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_GET_PROPERTY(FStrProperty,Z_Param_SenderName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReceiverEmail);
		P_GET_TARRAY(FString,Z_Param_CC);
		P_GET_TARRAY(FString,Z_Param_BCC);
		P_GET_PROPERTY(FStrProperty,Z_Param_Subject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_TARRAY(FString,Z_Param_Attachments);
		P_GET_ENUM(EEmailType,Z_Param_EmailService);
		P_GET_UBOOL(Z_Param_bUsesHTML);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEmailDetailsObject**)Z_Param__Result=UEmailFL::MakeEmailDetails(Z_Param_SenderEmail,Z_Param_Password,Z_Param_SenderName,Z_Param_ReceiverEmail,Z_Param_CC,Z_Param_BCC,Z_Param_Subject,Z_Param_Message,Z_Param_Attachments,EEmailType(Z_Param_EmailService),Z_Param_bUsesHTML);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execGetUsersFromEmailDetailsAsset)
	{
		P_GET_OBJECT(UEmailDetailsAsset,Z_Param_EmailDetailsAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UEmailFL::GetUsersFromEmailDetailsAsset(Z_Param_EmailDetailsAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execMakeEmailDetailsFromAsset)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SelectedUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedUserInternal);
		P_GET_OBJECT(UEmailDetailsAsset,Z_Param_EmailDetailsAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReceiverEmail);
		P_GET_TARRAY(FString,Z_Param_CC);
		P_GET_TARRAY(FString,Z_Param_BCC);
		P_GET_PROPERTY(FStrProperty,Z_Param_Subject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_TARRAY(FString,Z_Param_Attachments);
		P_GET_UBOOL(Z_Param_bUsesHTML);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEmailDetailsObject**)Z_Param__Result=UEmailFL::MakeEmailDetailsFromAsset(Z_Param_SelectedUser,Z_Param_SelectedUserInternal,Z_Param_EmailDetailsAsset,Z_Param_ReceiverEmail,Z_Param_CC,Z_Param_BCC,Z_Param_Subject,Z_Param_Message,Z_Param_Attachments,Z_Param_bUsesHTML);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execSaveCaptureComponent2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_SceneCaptureComponent2D);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_GET_ENUM_REF(EEmailResult,Z_Param_Out_OutResult);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEmailFL::SaveCaptureComponent2D(Z_Param_WorldContextObject,Z_Param_SceneCaptureComponent2D,Z_Param_ImagePath,(EEmailResult&)(Z_Param_Out_OutResult),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execSendEmailV4)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UEmailDetailsObject,Z_Param_EmailDetailsObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_ENUM(ECharSet,Z_Param_CharacterSet);
		P_GET_ENUM(ESecurityType,Z_Param_SecurityType);
		P_GET_ENUM_REF(EEmailResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEmailFL::SendEmailV4(Z_Param_WorldContextObject,Z_Param_EmailDetailsObject,Z_Param_Username,Z_Param_ServerName,Z_Param_Port,ECharSet(Z_Param_CharacterSet),ESecurityType(Z_Param_SecurityType),(EEmailResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutError,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execSendEmailV3)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEmailDetails,Z_Param_EmailDetails);
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_ENUM(ECharSet,Z_Param_CharacterSet);
		P_GET_ENUM(ESecurityType,Z_Param_SecurityType);
		P_GET_ENUM_REF(EEmailResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEmailFL::SendEmailV3(Z_Param_WorldContextObject,Z_Param_EmailDetails,Z_Param_Username,Z_Param_ServerName,Z_Param_Port,ECharSet(Z_Param_CharacterSet),ESecurityType(Z_Param_SecurityType),(EEmailResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutError,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execSendEmailV2)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UEmailDetailsObject,Z_Param_EmailDetailsObject);
		P_GET_ENUM(ECharSet,Z_Param_CharacterSet);
		P_GET_ENUM(ESecurityType,Z_Param_SecurityType);
		P_GET_ENUM_REF(EEmailResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEmailFL::SendEmailV2(Z_Param_WorldContextObject,Z_Param_EmailDetailsObject,ECharSet(Z_Param_CharacterSet),ESecurityType(Z_Param_SecurityType),(EEmailResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutError,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEmailFL::execSendEmail)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FEmailDetails,Z_Param_EmailDetails);
		P_GET_ENUM(EEmailType,Z_Param_EmailService);
		P_GET_ENUM(ECharSet,Z_Param_CharacterSet);
		P_GET_ENUM(ESecurityType,Z_Param_SecurityType);
		P_GET_ENUM_REF(EEmailResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEmailFL::SendEmail(Z_Param_WorldContextObject,Z_Param_EmailDetails,EEmailType(Z_Param_EmailService),ECharSet(Z_Param_CharacterSet),ESecurityType(Z_Param_SecurityType),(EEmailResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutError,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	void UEmailFL::StaticRegisterNativesUEmailFL()
	{
		UClass* Class = UEmailFL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToArrayLines", &UEmailFL::execConvertToArrayLines },
			{ "DeleteFile", &UEmailFL::execDeleteFile },
			{ "DoesFileExist", &UEmailFL::execDoesFileExist },
			{ "GetAndroidGamePath", &UEmailFL::execGetAndroidGamePath },
			{ "GetHTMLForEmbeddedAttachement", &UEmailFL::execGetHTMLForEmbeddedAttachement },
			{ "GetHTMLForOnlineEmbeddedAttachment", &UEmailFL::execGetHTMLForOnlineEmbeddedAttachment },
			{ "GetIMGTagForEmbeddedAttachment", &UEmailFL::execGetIMGTagForEmbeddedAttachment },
			{ "GetIMGTagForOnlineEmbeddedAttachment", &UEmailFL::execGetIMGTagForOnlineEmbeddedAttachment },
			{ "GetUsersFromEmailDetailsAsset", &UEmailFL::execGetUsersFromEmailDetailsAsset },
			{ "MakeEmailDetails", &UEmailFL::execMakeEmailDetails },
			{ "MakeEmailDetailsFromAsset", &UEmailFL::execMakeEmailDetailsFromAsset },
			{ "SaveCaptureComponent2D", &UEmailFL::execSaveCaptureComponent2D },
			{ "SendEmail", &UEmailFL::execSendEmail },
			{ "SendEmailV2", &UEmailFL::execSendEmailV2 },
			{ "SendEmailV3", &UEmailFL::execSendEmailV3 },
			{ "SendEmailV4", &UEmailFL::execSendEmailV4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics
	{
		struct EmailFL_eventConvertToArrayLines_Parms
		{
			FString String;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventConvertToArrayLines_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventConvertToArrayLines_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Utilities" },
		{ "Comment", "/**\n\x09 *Convert string into lines stored in the array returned\n\x09 *@param String The string that should be split into lines using LINE_TERMINATORs\n\x09 *@return An array of strings in which each entry is a line\n\x09 */" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Convert string into lines stored in the array returned\n@param String The string that should be split into lines using LINE_TERMINATORs\n@return An array of strings in which each entry is a line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "ConvertToArrayLines", nullptr, nullptr, sizeof(EmailFL_eventConvertToArrayLines_Parms), Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_ConvertToArrayLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_ConvertToArrayLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_DeleteFile_Statics
	{
		struct EmailFL_eventDeleteFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventDeleteFile_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EmailFL_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EmailFL_eventDeleteFile_Parms), &Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Image Processing" },
		{ "Comment", "/**\n\x09 *Deletes file\n\x09 *@param FilePath The full path of the file to delete\n\x09 *@return True if successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Deletes file\n@param FilePath The full path of the file to delete\n@return True if successful" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "DeleteFile", nullptr, nullptr, sizeof(EmailFL_eventDeleteFile_Parms), Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics
	{
		struct EmailFL_eventDoesFileExist_Parms
		{
			FString Path;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventDoesFileExist_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::NewProp_Path_MetaData)) };
	void Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EmailFL_eventDoesFileExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EmailFL_eventDoesFileExist_Parms), &Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Image Processing" },
		{ "Comment", "/**\n\x09 *Check if file exists on disk\n\x09 *@param Path The full path of the file to check \n\x09 *@return True if the file exist otherwise false\n\x09 */" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Check if file exists on disk\n@param Path The full path of the file to check\n@return True if the file exist otherwise false" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "DoesFileExist", nullptr, nullptr, sizeof(EmailFL_eventDoesFileExist_Parms), Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_DoesFileExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_DoesFileExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics
	{
		struct EmailFL_eventGetAndroidGamePath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetAndroidGamePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Image Processing" },
		{ "Comment", "/**\n\x09 *On Android the get directories blueprint functions return a relative path. This gets the absolute path. \n\x09 *@return This function returns the absolute path of the game.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "On Android the get directories blueprint functions return a relative path. This gets the absolute path.\n@return This function returns the absolute path of the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "GetAndroidGamePath", nullptr, nullptr, sizeof(EmailFL_eventGetAndroidGamePath_Parms), Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_GetAndroidGamePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_GetAndroidGamePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics
	{
		struct EmailFL_eventGetHTMLForEmbeddedAttachement_Parms
		{
			FString Attachment;
			FVector2D Size;
			int32 NumSpacesBeforePic;
			int32 NumSpacesAfterPic;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attachment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSpacesBeforePic;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSpacesAfterPic;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetHTMLForEmbeddedAttachement_Parms, Attachment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetHTMLForEmbeddedAttachement_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::NewProp_NumSpacesBeforePic = { "NumSpacesBeforePic", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetHTMLForEmbeddedAttachement_Parms, NumSpacesBeforePic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::NewProp_NumSpacesAfterPic = { "NumSpacesAfterPic", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetHTMLForEmbeddedAttachement_Parms, NumSpacesAfterPic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetHTMLForEmbeddedAttachement_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::NewProp_Attachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::NewProp_NumSpacesBeforePic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::NewProp_NumSpacesAfterPic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "NumSpacesBeforePic, NumSpacesAfterPic" },
		{ "Category", "Email Library | Utilities" },
		{ "Comment", "/**\n\x09 *Constructs an HTML page containing an <img> tag which references an attachment. Optionally adds a number of <br> tags before and after the image.\n\x09 *@param Attachment The attachment file to reference in the <img> tag. The name of the file not the full path.\n\x09 *@param Size The size the image will be displayed at in pixels\n\x09 *@param NumSpacesBeforePic Optional number of spaces before the image. \n\x09 *@param NumSpacesAfterPic Optional number of spaces after the image\n\x09 *@return The generated HTML page containing the <img> tag.\n\x09 */" },
		{ "CPP_Default_Attachment", "" },
		{ "CPP_Default_NumSpacesAfterPic", "1" },
		{ "CPP_Default_NumSpacesBeforePic", "1" },
		{ "CPP_Default_Size", "(X=200.000,Y=200.000)" },
		{ "DisplayName", "Get HTML For Embedded Attachment" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Constructs an HTML page containing an <img> tag which references an attachment. Optionally adds a number of <br> tags before and after the image.\n@param Attachment The attachment file to reference in the <img> tag. The name of the file not the full path.\n@param Size The size the image will be displayed at in pixels\n@param NumSpacesBeforePic Optional number of spaces before the image.\n@param NumSpacesAfterPic Optional number of spaces after the image\n@return The generated HTML page containing the <img> tag." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "GetHTMLForEmbeddedAttachement", nullptr, nullptr, sizeof(EmailFL_eventGetHTMLForEmbeddedAttachement_Parms), Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics
	{
		struct EmailFL_eventGetHTMLForOnlineEmbeddedAttachment_Parms
		{
			FString URL;
			FVector2D Size;
			int32 NumSpacesBeforePic;
			int32 NumSpacesAfterPic;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSpacesBeforePic;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSpacesAfterPic;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetHTMLForOnlineEmbeddedAttachment_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetHTMLForOnlineEmbeddedAttachment_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::NewProp_NumSpacesBeforePic = { "NumSpacesBeforePic", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetHTMLForOnlineEmbeddedAttachment_Parms, NumSpacesBeforePic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::NewProp_NumSpacesAfterPic = { "NumSpacesAfterPic", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetHTMLForOnlineEmbeddedAttachment_Parms, NumSpacesAfterPic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetHTMLForOnlineEmbeddedAttachment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::NewProp_NumSpacesBeforePic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::NewProp_NumSpacesAfterPic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "NumSpacesBeforePic, NumSpacesAfterPic" },
		{ "Category", "Email Library | Utilities" },
		{ "Comment", "/**\n\x09 *Constructs an HTML page <img> tag which references a URL. Optionally adds a number of <br> tags before and after the image.\n\x09 *@param URL The url to reference in the <img> tag. The name of the file not the full path.\n\x09 *@param Size The size the image will be displayed at in pixels\n\x09 *@param NumSpacesBeforePic Optional number of spaces before the image.\n\x09 *@param NumSpacesAfterPic Optional number of spaces after the image\n\x09 *@return The generated HTML page containing the <img> tag.\n\x09 */" },
		{ "CPP_Default_NumSpacesAfterPic", "1" },
		{ "CPP_Default_NumSpacesBeforePic", "1" },
		{ "CPP_Default_Size", "(X=200.000,Y=200.000)" },
		{ "CPP_Default_URL", "" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Constructs an HTML page <img> tag which references a URL. Optionally adds a number of <br> tags before and after the image.\n@param URL The url to reference in the <img> tag. The name of the file not the full path.\n@param Size The size the image will be displayed at in pixels\n@param NumSpacesBeforePic Optional number of spaces before the image.\n@param NumSpacesAfterPic Optional number of spaces after the image\n@return The generated HTML page containing the <img> tag." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "GetHTMLForOnlineEmbeddedAttachment", nullptr, nullptr, sizeof(EmailFL_eventGetHTMLForOnlineEmbeddedAttachment_Parms), Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics
	{
		struct EmailFL_eventGetIMGTagForEmbeddedAttachment_Parms
		{
			FString Attachment;
			FVector2D Size;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attachment;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetIMGTagForEmbeddedAttachment_Parms, Attachment), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetIMGTagForEmbeddedAttachment_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetIMGTagForEmbeddedAttachment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::NewProp_Attachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Utilities" },
		{ "Comment", "/**\n\x09 * Constructs an <img> tag which references an attachment. Optionally adds a number of </br> tags before and after the image.\n\x09 * @param Attachment The attachment file to reference <img> tag. The name of the file not the full path.\n\x09 * @param Size The size the image will be displayed at in pixels.\n\x09 * @return The generated <img> tag.\n\x09 */" },
		{ "CPP_Default_Attachment", "" },
		{ "CPP_Default_Size", "(X=200.000,Y=200.000)" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Constructs an <img> tag which references an attachment. Optionally adds a number of </br> tags before and after the image.\n@param Attachment The attachment file to reference <img> tag. The name of the file not the full path.\n@param Size The size the image will be displayed at in pixels.\n@return The generated <img> tag." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "GetIMGTagForEmbeddedAttachment", nullptr, nullptr, sizeof(EmailFL_eventGetIMGTagForEmbeddedAttachment_Parms), Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics
	{
		struct EmailFL_eventGetIMGTagForOnlineEmbeddedAttachment_Parms
		{
			FString URL;
			FVector2D Size;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetIMGTagForOnlineEmbeddedAttachment_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetIMGTagForOnlineEmbeddedAttachment_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetIMGTagForOnlineEmbeddedAttachment_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Utilities" },
		{ "Comment", "/**\n\x09 * Constructs an <img> tag which references a URL. \n\x09 * @param URL The url to reference in the <img> tag. The name of the file not the full path.\n\x09 * @param Size The size the image will be displayed at in pixels.\n\x09 * @return The generated <img> tag.\n\x09 */" },
		{ "CPP_Default_Size", "(X=200.000,Y=200.000)" },
		{ "CPP_Default_URL", "" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Constructs an <img> tag which references a URL.\n@param URL The url to reference in the <img> tag. The name of the file not the full path.\n@param Size The size the image will be displayed at in pixels.\n@return The generated <img> tag." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "GetIMGTagForOnlineEmbeddedAttachment", nullptr, nullptr, sizeof(EmailFL_eventGetIMGTagForOnlineEmbeddedAttachment_Parms), Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics
	{
		struct EmailFL_eventGetUsersFromEmailDetailsAsset_Parms
		{
			UEmailDetailsAsset* EmailDetailsAsset;
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmailDetailsAsset;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::NewProp_EmailDetailsAsset = { "EmailDetailsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetUsersFromEmailDetailsAsset_Parms, EmailDetailsAsset), Z_Construct_UClass_UEmailDetailsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventGetUsersFromEmailDetailsAsset_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::NewProp_EmailDetailsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Utilities" },
		{ "Comment", "/**\n\x09 *Get Users From Email Detail Asset\n\x09 *@param EmailDetailsAsset A reference to the email details asset to query\n\x09 *@return Returns a list of users created inside the Email Details Asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Get Users From Email Detail Asset\n@param EmailDetailsAsset A reference to the email details asset to query\n@return Returns a list of users created inside the Email Details Asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "GetUsersFromEmailDetailsAsset", nullptr, nullptr, sizeof(EmailFL_eventGetUsersFromEmailDetailsAsset_Parms), Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics
	{
		struct EmailFL_eventMakeEmailDetails_Parms
		{
			FString SenderEmail;
			FString Password;
			FString SenderName;
			FString ReceiverEmail;
			TArray<FString> CC;
			TArray<FString> BCC;
			FString Subject;
			FString Message;
			TArray<FString> Attachments;
			EEmailType EmailService;
			bool bUsesHTML;
			UEmailDetailsObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderEmail;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiverEmail;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CC_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CC;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BCC_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BCC;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attachments_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attachments;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmailService_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmailService;
		static void NewProp_bUsesHTML_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesHTML;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_SenderEmail = { "SenderEmail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, SenderEmail), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, Password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, SenderName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_ReceiverEmail = { "ReceiverEmail", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, ReceiverEmail), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_CC_Inner = { "CC", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_CC = { "CC", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, CC), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_BCC_Inner = { "BCC", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_BCC = { "BCC", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, BCC), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, Subject), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_EmailService_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_EmailService = { "EmailService", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, EmailService), Z_Construct_UEnum_EmailPlugin_EEmailType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_bUsesHTML_SetBit(void* Obj)
	{
		((EmailFL_eventMakeEmailDetails_Parms*)Obj)->bUsesHTML = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_bUsesHTML = { "bUsesHTML", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EmailFL_eventMakeEmailDetails_Parms), &Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_bUsesHTML_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetails_Parms, ReturnValue), Z_Construct_UClass_UEmailDetailsObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_SenderEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_SenderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_ReceiverEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_CC_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_CC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_BCC_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_BCC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_Attachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_Attachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_EmailService_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_EmailService,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_bUsesHTML,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "Attachments, CC, BCC" },
		{ "Category", "Email Library | Utilities" },
		{ "Comment", "/**\n \x09 *Alternative to the default make EmailDetails struct. This version hides the password from the user.\n \x09 *@param SenderEmail The address used for sending the email\n\x09 *@param Password The password of the address used to send the email\n\x09 *@param SenderName The name shown on the email as the person who sent it\n\x09 *@param ReceiverEmail The address the email will be sent to \n\x09 *@param Subject The subject of the email\n\x09 *@param Message The message that the email will contain\n\x09 *@param Attachments The attachment files\n\x09 *@param EmailService The email service (SMTP server) that is used to send an email. If you are using a @gmail.com email this would be set to GMAIL\n\x09 *@param bUsesHTML Should the email be formatted as an HTML page. If the option is on you will have to take care of the whole formatting yourself including breaking up the text into lines using <br>. To split a text into lines use the ConvertToArrayLines node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Alternative to the default make EmailDetails struct. This version hides the password from the user.\n@param SenderEmail The address used for sending the email\n@param Password The password of the address used to send the email\n@param SenderName The name shown on the email as the person who sent it\n@param ReceiverEmail The address the email will be sent to\n@param Subject The subject of the email\n@param Message The message that the email will contain\n@param Attachments The attachment files\n@param EmailService The email service (SMTP server) that is used to send an email. If you are using a @gmail.com email this would be set to GMAIL\n@param bUsesHTML Should the email be formatted as an HTML page. If the option is on you will have to take care of the whole formatting yourself including breaking up the text into lines using <br>. To split a text into lines use the ConvertToArrayLines node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "MakeEmailDetails", nullptr, nullptr, sizeof(EmailFL_eventMakeEmailDetails_Parms), Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_MakeEmailDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_MakeEmailDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics
	{
		struct EmailFL_eventMakeEmailDetailsFromAsset_Parms
		{
			FName SelectedUser;
			FString SelectedUserInternal;
			UEmailDetailsAsset* EmailDetailsAsset;
			FString ReceiverEmail;
			TArray<FString> CC;
			TArray<FString> BCC;
			FString Subject;
			FString Message;
			TArray<FString> Attachments;
			bool bUsesHTML;
			UEmailDetailsObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectedUser;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedUserInternal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmailDetailsAsset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiverEmail;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CC_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CC;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BCC_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BCC;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Attachments_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attachments;
		static void NewProp_bUsesHTML_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesHTML;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_SelectedUser = { "SelectedUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetailsFromAsset_Parms, SelectedUser), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_SelectedUserInternal = { "SelectedUserInternal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetailsFromAsset_Parms, SelectedUserInternal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_EmailDetailsAsset = { "EmailDetailsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetailsFromAsset_Parms, EmailDetailsAsset), Z_Construct_UClass_UEmailDetailsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_ReceiverEmail = { "ReceiverEmail", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetailsFromAsset_Parms, ReceiverEmail), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_CC_Inner = { "CC", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_CC = { "CC", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetailsFromAsset_Parms, CC), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_BCC_Inner = { "BCC", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_BCC = { "BCC", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetailsFromAsset_Parms, BCC), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetailsFromAsset_Parms, Subject), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetailsFromAsset_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_Attachments_Inner = { "Attachments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_Attachments = { "Attachments", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetailsFromAsset_Parms, Attachments), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_bUsesHTML_SetBit(void* Obj)
	{
		((EmailFL_eventMakeEmailDetailsFromAsset_Parms*)Obj)->bUsesHTML = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_bUsesHTML = { "bUsesHTML", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EmailFL_eventMakeEmailDetailsFromAsset_Parms), &Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_bUsesHTML_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventMakeEmailDetailsFromAsset_Parms, ReturnValue), Z_Construct_UClass_UEmailDetailsObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_SelectedUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_SelectedUserInternal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_EmailDetailsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_ReceiverEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_CC_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_CC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_BCC_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_BCC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_Attachments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_Attachments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_bUsesHTML,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "AutoCreateRefTerm", "Attachments, CC, BCC" },
		{ "Category", "Email Library | Utilities" },
		{ "Comment", "/**\n\x09 *Make Email Details From Asset\n\x09 *@param SelectedUser The user details from the list of users inside the email detail asset selected\n\x09 *@param EmailDetailsAsset A reference to an email detail asset. It can be created in the content browser under Miscellaneous\n\x09 *@param ReceiverEmail The email of the receiver\n\x09 *@param Subject The subject of the email\n\x09 *@param Message The message that the email will contain\n\x09 *@param Attachments The attachment files\n\x09 *@param bUsesHTML Should the email be formatted as an HTML page. If the option is on you will have to take care of the whole formatting yourself including breaking up the text into lines using <br>. To split a text into lines use the ConvertToArrayLines node.\n\x09 *@return Returns a reference to an Email Details Object that can be fed into the Send Email (Email Details Object) node\n\x09 */" },
		{ "HidePin", "SelectedUserInternal" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Make Email Details From Asset\n@param SelectedUser The user details from the list of users inside the email detail asset selected\n@param EmailDetailsAsset A reference to an email detail asset. It can be created in the content browser under Miscellaneous\n@param ReceiverEmail The email of the receiver\n@param Subject The subject of the email\n@param Message The message that the email will contain\n@param Attachments The attachment files\n@param bUsesHTML Should the email be formatted as an HTML page. If the option is on you will have to take care of the whole formatting yourself including breaking up the text into lines using <br>. To split a text into lines use the ConvertToArrayLines node.\n@return Returns a reference to an Email Details Object that can be fed into the Send Email (Email Details Object) node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "MakeEmailDetailsFromAsset", nullptr, nullptr, sizeof(EmailFL_eventMakeEmailDetailsFromAsset_Parms), Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics
	{
		struct EmailFL_eventSaveCaptureComponent2D_Parms
		{
			UObject* WorldContextObject;
			USceneCaptureComponent2D* SceneCaptureComponent2D;
			FString ImagePath;
			EEmailResult OutResult;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureComponent2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneCaptureComponent2D;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSaveCaptureComponent2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_SceneCaptureComponent2D_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_SceneCaptureComponent2D = { "SceneCaptureComponent2D", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSaveCaptureComponent2D_Parms, SceneCaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_SceneCaptureComponent2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_SceneCaptureComponent2D_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSaveCaptureComponent2D_Parms, ImagePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSaveCaptureComponent2D_Parms, OutResult), Z_Construct_UEnum_EmailPlugin_EEmailResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSaveCaptureComponent2D_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_SceneCaptureComponent2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_ImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Image Processing" },
		{ "Comment", "/**\n\x09 *Save Capture Component 2D to an image\n\x09 *@param SceneCaptureComponent2D The scene capture component 2D that will be used to take the picture in the scene\n\x09 *@param ImagePath The full image path including the file extension\n\x09 *@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Save Capture Component 2D to an image\n@param SceneCaptureComponent2D The scene capture component 2D that will be used to take the picture in the scene\n@param ImagePath The full image path including the file extension\n@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "SaveCaptureComponent2D", nullptr, nullptr, sizeof(EmailFL_eventSaveCaptureComponent2D_Parms), Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_SendEmail_Statics
	{
		struct EmailFL_eventSendEmail_Parms
		{
			UObject* WorldContextObject;
			FEmailDetails EmailDetails;
			EEmailType EmailService;
			ECharSet CharacterSet;
			ESecurityType SecurityType;
			EEmailResult OutResult;
			FString OutError;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmailDetails;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmailService_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmailService;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterSet_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterSet;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecurityType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecurityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmail_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_EmailDetails = { "EmailDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmail_Parms, EmailDetails), Z_Construct_UScriptStruct_FEmailDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_EmailService_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_EmailService = { "EmailService", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmail_Parms, EmailService), Z_Construct_UEnum_EmailPlugin_EEmailType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_CharacterSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_CharacterSet = { "CharacterSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmail_Parms, CharacterSet), Z_Construct_UEnum_EmailPlugin_ECharSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_SecurityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_SecurityType = { "SecurityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmail_Parms, SecurityType), Z_Construct_UEnum_EmailPlugin_ESecurityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmail_Parms, OutResult), Z_Construct_UEnum_EmailPlugin_EEmailResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmail_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmail_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_SendEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_EmailDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_EmailService_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_EmailService,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_CharacterSet_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_CharacterSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_SecurityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_SecurityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_OutError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmail_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_SendEmail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Send" },
		{ "Comment", "/**\n\x09 *Send email\n\x09 *@param EmailDetails This is the struct EmailDetails which contains all the information needed for sending an email\n\x09 *@param EmailService The email service (SMTP server) that is used to send an email. If you are using a @gmail.com email this would be set to GMAIL\n\x09 *@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Send email\n@param EmailDetails This is the struct EmailDetails which contains all the information needed for sending an email\n@param EmailService The email service (SMTP server) that is used to send an email. If you are using a @gmail.com email this would be set to GMAIL\n@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_SendEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "SendEmail", nullptr, nullptr, sizeof(EmailFL_eventSendEmail_Parms), Z_Construct_UFunction_UEmailFL_SendEmail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SendEmail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_SendEmail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SendEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_SendEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_SendEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics
	{
		struct EmailFL_eventSendEmailV2_Parms
		{
			UObject* WorldContextObject;
			UEmailDetailsObject* EmailDetailsObject;
			ECharSet CharacterSet;
			ESecurityType SecurityType;
			EEmailResult OutResult;
			FString OutError;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmailDetailsObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterSet_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterSet;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecurityType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecurityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV2_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_EmailDetailsObject = { "EmailDetailsObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV2_Parms, EmailDetailsObject), Z_Construct_UClass_UEmailDetailsObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_CharacterSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_CharacterSet = { "CharacterSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV2_Parms, CharacterSet), Z_Construct_UEnum_EmailPlugin_ECharSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_SecurityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_SecurityType = { "SecurityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV2_Parms, SecurityType), Z_Construct_UEnum_EmailPlugin_ESecurityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV2_Parms, OutResult), Z_Construct_UEnum_EmailPlugin_EEmailResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV2_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV2_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_EmailDetailsObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_CharacterSet_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_CharacterSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_SecurityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_SecurityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_OutError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Send" },
		{ "Comment", "/**\n\x09 *Send email using an email details object\n\x09 *@param EmailDetailsObject The email details object contains all the information needed to send an email. The only way to construct this object is by using the MakeEmailDetailsFromAsset node or MakeEmailDetails node\n\x09 *@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?\n\x09 */" },
		{ "DisplayName", "Send Email (Email Details Object)" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Send email using an email details object\n@param EmailDetailsObject The email details object contains all the information needed to send an email. The only way to construct this object is by using the MakeEmailDetailsFromAsset node or MakeEmailDetails node\n@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "SendEmailV2", nullptr, nullptr, sizeof(EmailFL_eventSendEmailV2_Parms), Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_SendEmailV2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_SendEmailV2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics
	{
		struct EmailFL_eventSendEmailV3_Parms
		{
			UObject* WorldContextObject;
			FEmailDetails EmailDetails;
			FString Username;
			FString ServerName;
			int32 Port;
			ECharSet CharacterSet;
			ESecurityType SecurityType;
			EEmailResult OutResult;
			FString OutError;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmailDetails;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterSet_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterSet;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecurityType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecurityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV3_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_EmailDetails = { "EmailDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV3_Parms, EmailDetails), Z_Construct_UScriptStruct_FEmailDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV3_Parms, Username), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV3_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV3_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_CharacterSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_CharacterSet = { "CharacterSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV3_Parms, CharacterSet), Z_Construct_UEnum_EmailPlugin_ECharSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_SecurityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_SecurityType = { "SecurityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV3_Parms, SecurityType), Z_Construct_UEnum_EmailPlugin_ESecurityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV3_Parms, OutResult), Z_Construct_UEnum_EmailPlugin_EEmailResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV3_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV3_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_EmailDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_ServerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_CharacterSet_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_CharacterSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_SecurityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_SecurityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_OutError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Send" },
		{ "Comment", "/**\n\x09 *Send email and specify a custom SMTP server\n\x09 *@param EmailDetails This is the struct EmailDetails which contains all the information needed for sending an email\n\x09 *@param Username This would be a dedicated username that you may need to use the SMTP server from an external application. E.g. Amazon SES gives you a generated username and password, the username must be entered here.\n\x09 *@param ServerName This is the name of the SMTP server. For instance the gmail one would be smtp.gmail.com (gmail is already included in the default ones)\n\x09 *@param Port This is the port number of the SMTP server. 587 for GMAIL, OUTLOOK and YAHOO\n\x09 *@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?\n\x09 */" },
		{ "DisplayName", "Send Email (Custom SMTP Server)" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Send email and specify a custom SMTP server\n@param EmailDetails This is the struct EmailDetails which contains all the information needed for sending an email\n@param Username This would be a dedicated username that you may need to use the SMTP server from an external application. E.g. Amazon SES gives you a generated username and password, the username must be entered here.\n@param ServerName This is the name of the SMTP server. For instance the gmail one would be smtp.gmail.com (gmail is already included in the default ones)\n@param Port This is the port number of the SMTP server. 587 for GMAIL, OUTLOOK and YAHOO\n@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "SendEmailV3", nullptr, nullptr, sizeof(EmailFL_eventSendEmailV3_Parms), Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_SendEmailV3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_SendEmailV3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics
	{
		struct EmailFL_eventSendEmailV4_Parms
		{
			UObject* WorldContextObject;
			UEmailDetailsObject* EmailDetailsObject;
			FString Username;
			FString ServerName;
			int32 Port;
			ECharSet CharacterSet;
			ESecurityType SecurityType;
			EEmailResult OutResult;
			FString OutError;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmailDetailsObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterSet_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterSet;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecurityType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecurityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV4_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_EmailDetailsObject = { "EmailDetailsObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV4_Parms, EmailDetailsObject), Z_Construct_UClass_UEmailDetailsObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV4_Parms, Username), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV4_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV4_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_CharacterSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_CharacterSet = { "CharacterSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV4_Parms, CharacterSet), Z_Construct_UEnum_EmailPlugin_ECharSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_SecurityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_SecurityType = { "SecurityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV4_Parms, SecurityType), Z_Construct_UEnum_EmailPlugin_ESecurityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV4_Parms, OutResult), Z_Construct_UEnum_EmailPlugin_EEmailResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV4_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EmailFL_eventSendEmailV4_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_EmailDetailsObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_ServerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_CharacterSet_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_CharacterSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_SecurityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_SecurityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_OutResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_OutResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_OutError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Email Library | Send" },
		{ "Comment", "/**\n\x09 *Send email using an email details object and specify a custom SMTP server \n\x09 *@param EmailDetailsObject The email details object contains all the information needed to send an email. The only way to construct this object is by using the MakeEmailDetailsFromAsset node or MakeEmailDetails node\n\x09 *@param Username This would be a dedicated username that you may need to use the SMTP server from an external application. E.g. Amazon SES gives you a generated username and password, the username must be entered here.\n\x09 *@param ServerName This is the name of the SMTP server. For instance the gmail one would be smtp.gmail.com (gmail is already included in the default ones)\n\x09 *@param Port This is the port number of the SMTP server. 587 for GMAIL, OUTLOOK and YAHOO\n\x09 *@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?\n\x09 */" },
		{ "DisplayName", "Send Email (Custom SMTP Server Email Details Object)" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
		{ "ToolTip", "Send email using an email details object and specify a custom SMTP server\n@param EmailDetailsObject The email details object contains all the information needed to send an email. The only way to construct this object is by using the MakeEmailDetailsFromAsset node or MakeEmailDetails node\n@param Username This would be a dedicated username that you may need to use the SMTP server from an external application. E.g. Amazon SES gives you a generated username and password, the username must be entered here.\n@param ServerName This is the name of the SMTP server. For instance the gmail one would be smtp.gmail.com (gmail is already included in the default ones)\n@param Port This is the port number of the SMTP server. 587 for GMAIL, OUTLOOK and YAHOO\n@param OutResult This is the email plugin result that you can check once the latent function is done. Was it successful or failed?" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEmailFL, nullptr, "SendEmailV4", nullptr, nullptr, sizeof(EmailFL_eventSendEmailV4_Parms), Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEmailFL_SendEmailV4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEmailFL_SendEmailV4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEmailFL_NoRegister()
	{
		return UEmailFL::StaticClass();
	}
	struct Z_Construct_UClass_UEmailFL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEmailFL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EmailPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEmailFL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEmailFL_ConvertToArrayLines, "ConvertToArrayLines" }, // 267285367
		{ &Z_Construct_UFunction_UEmailFL_DeleteFile, "DeleteFile" }, // 1659508209
		{ &Z_Construct_UFunction_UEmailFL_DoesFileExist, "DoesFileExist" }, // 4160548502
		{ &Z_Construct_UFunction_UEmailFL_GetAndroidGamePath, "GetAndroidGamePath" }, // 637286543
		{ &Z_Construct_UFunction_UEmailFL_GetHTMLForEmbeddedAttachement, "GetHTMLForEmbeddedAttachement" }, // 1632649621
		{ &Z_Construct_UFunction_UEmailFL_GetHTMLForOnlineEmbeddedAttachment, "GetHTMLForOnlineEmbeddedAttachment" }, // 3446510988
		{ &Z_Construct_UFunction_UEmailFL_GetIMGTagForEmbeddedAttachment, "GetIMGTagForEmbeddedAttachment" }, // 1138724196
		{ &Z_Construct_UFunction_UEmailFL_GetIMGTagForOnlineEmbeddedAttachment, "GetIMGTagForOnlineEmbeddedAttachment" }, // 1655350201
		{ &Z_Construct_UFunction_UEmailFL_GetUsersFromEmailDetailsAsset, "GetUsersFromEmailDetailsAsset" }, // 3608017779
		{ &Z_Construct_UFunction_UEmailFL_MakeEmailDetails, "MakeEmailDetails" }, // 3746468195
		{ &Z_Construct_UFunction_UEmailFL_MakeEmailDetailsFromAsset, "MakeEmailDetailsFromAsset" }, // 3200748307
		{ &Z_Construct_UFunction_UEmailFL_SaveCaptureComponent2D, "SaveCaptureComponent2D" }, // 3062293795
		{ &Z_Construct_UFunction_UEmailFL_SendEmail, "SendEmail" }, // 2999205605
		{ &Z_Construct_UFunction_UEmailFL_SendEmailV2, "SendEmailV2" }, // 2533584167
		{ &Z_Construct_UFunction_UEmailFL_SendEmailV3, "SendEmailV3" }, // 2240996576
		{ &Z_Construct_UFunction_UEmailFL_SendEmailV4, "SendEmailV4" }, // 2001743405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEmailFL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EmailFL.h" },
		{ "ModuleRelativePath", "Public/EmailFL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEmailFL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEmailFL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEmailFL_Statics::ClassParams = {
		&UEmailFL::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEmailFL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEmailFL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEmailFL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEmailFL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEmailFL, 2056486803);
	template<> EMAILPLUGIN_API UClass* StaticClass<UEmailFL>()
	{
		return UEmailFL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEmailFL(Z_Construct_UClass_UEmailFL, &UEmailFL::StaticClass, TEXT("/Script/EmailPlugin"), TEXT("UEmailFL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEmailFL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
