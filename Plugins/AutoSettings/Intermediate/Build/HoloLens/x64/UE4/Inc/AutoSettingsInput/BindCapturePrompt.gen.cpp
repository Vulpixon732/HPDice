// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettingsInput/Public/UI/BindCapturePrompt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBindCapturePrompt() {}
// Cross Module References
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoSettingsInput();
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature();
	AUTOSETTINGSINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedInput();
	AUTOSETTINGSINPUT_API UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature();
	AUTOSETTINGSINPUT_API UEnum* Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UBindCapturePrompt_NoRegister();
	AUTOSETTINGSINPUT_API UClass* Z_Construct_UClass_UBindCapturePrompt();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics
	{
		struct _Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms
		{
			bool bWasCancelled;
		};
		static void NewProp_bWasCancelled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
	{
		((_Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms*)Obj)->bWasCancelled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms), &Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::NewProp_bWasCancelled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput, nullptr, "CapturePromptClosedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoSettingsInput_eventCapturePromptClosedEvent_Parms), Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics
	{
		struct _Script_AutoSettingsInput_eventChordRejectedEvent_Parms
		{
			FCapturedInput CapturedInput;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapturedInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::NewProp_CapturedInput = { "CapturedInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AutoSettingsInput_eventChordRejectedEvent_Parms, CapturedInput), Z_Construct_UScriptStruct_FCapturedInput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::NewProp_CapturedInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput, nullptr, "ChordRejectedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoSettingsInput_eventChordRejectedEvent_Parms), Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics
	{
		struct _Script_AutoSettingsInput_eventChordCapturedEvent_Parms
		{
			FCapturedInput CapturedInput;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapturedInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::NewProp_CapturedInput = { "CapturedInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AutoSettingsInput_eventChordCapturedEvent_Parms, CapturedInput), Z_Construct_UScriptStruct_FCapturedInput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::NewProp_CapturedInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput, nullptr, "ChordCapturedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoSettingsInput_eventChordCapturedEvent_Parms), Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EBindingCaptureMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("EBindingCaptureMode"));
		}
		return Singleton;
	}
	template<> AUTOSETTINGSINPUT_API UEnum* StaticEnum<EBindingCaptureMode>()
	{
		return EBindingCaptureMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBindingCaptureMode(EBindingCaptureMode_StaticEnum, TEXT("/Script/AutoSettingsInput"), TEXT("EBindingCaptureMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode_Hash() { return 3241659494U; }
	UEnum* Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBindingCaptureMode"), 0, Get_Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBindingCaptureMode::OnReleased", (int64)EBindingCaptureMode::OnReleased },
				{ "EBindingCaptureMode::OnPressed", (int64)EBindingCaptureMode::OnPressed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
				{ "OnPressed.Comment", "// Capture keys when they are pressed. This will prevent use of modifiers, since a modifier will be captured by itself when it is pressed.\n" },
				{ "OnPressed.Name", "EBindingCaptureMode::OnPressed" },
				{ "OnPressed.ToolTip", "Capture keys when they are pressed. This will prevent use of modifiers, since a modifier will be captured by itself when it is pressed." },
				{ "OnReleased.Comment", "// Capture keys when they are released (default)\n" },
				{ "OnReleased.Name", "EBindingCaptureMode::OnReleased" },
				{ "OnReleased.ToolTip", "Capture keys when they are released (default)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AutoSettingsInput,
				nullptr,
				"EBindingCaptureMode",
				"EBindingCaptureMode",
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
class UScriptStruct* FCapturedInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGSINPUT_API uint32 Get_Z_Construct_UScriptStruct_FCapturedInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturedInput, Z_Construct_UPackage__Script_AutoSettingsInput(), TEXT("CapturedInput"), sizeof(FCapturedInput), Get_Z_Construct_UScriptStruct_FCapturedInput_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGSINPUT_API UScriptStruct* StaticStruct<FCapturedInput>()
{
	return FCapturedInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCapturedInput(FCapturedInput::StaticStruct, TEXT("/Script/AutoSettingsInput"), TEXT("CapturedInput"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettingsInput_StaticRegisterNativesFCapturedInput
{
	FScriptStruct_AutoSettingsInput_StaticRegisterNativesFCapturedInput()
	{
		UScriptStruct::DeferCppStructOps<FCapturedInput>(FName(TEXT("CapturedInput")));
	}
} ScriptStruct_AutoSettingsInput_StaticRegisterNativesFCapturedInput;
	struct Z_Construct_UScriptStruct_FCapturedInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Chord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapturedInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturedInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_Chord_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_Chord = { "Chord", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapturedInput, Chord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_Chord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_Chord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_AxisScale_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_AxisScale = { "AxisScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapturedInput, AxisScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_AxisScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_AxisScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapturedInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_Chord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedInput_Statics::NewProp_AxisScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturedInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
		nullptr,
		&NewStructOps,
		"CapturedInput",
		sizeof(FCapturedInput),
		alignof(FCapturedInput),
		Z_Construct_UScriptStruct_FCapturedInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapturedInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCapturedInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettingsInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CapturedInput"), sizeof(FCapturedInput), Get_Z_Construct_UScriptStruct_FCapturedInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCapturedInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCapturedInput_Hash() { return 1450759255U; }
	DEFINE_FUNCTION(UBindCapturePrompt::execIsKeyAllowed)
	{
		P_GET_STRUCT(FKey,Z_Param_PrimaryKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsKeyAllowed_Implementation(Z_Param_PrimaryKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBindCapturePrompt::execGetKeyGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetKeyGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBindCapturePrompt::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	static FName NAME_UBindCapturePrompt_IsKeyAllowed = FName(TEXT("IsKeyAllowed"));
	bool UBindCapturePrompt::IsKeyAllowed(FKey PrimaryKey)
	{
		BindCapturePrompt_eventIsKeyAllowed_Parms Parms;
		Parms.PrimaryKey=PrimaryKey;
		ProcessEvent(FindFunctionChecked(NAME_UBindCapturePrompt_IsKeyAllowed),&Parms);
		return !!Parms.ReturnValue;
	}
	void UBindCapturePrompt::StaticRegisterNativesUBindCapturePrompt()
	{
		UClass* Class = UBindCapturePrompt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cancel", &UBindCapturePrompt::execCancel },
			{ "GetKeyGroup", &UBindCapturePrompt::execGetKeyGroup },
			{ "IsKeyAllowed", &UBindCapturePrompt::execIsKeyAllowed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Cancel listening and close the prompt\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Cancel listening and close the prompt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCapturePrompt, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBindCapturePrompt_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBindCapturePrompt_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics
	{
		struct BindCapturePrompt_eventGetKeyGroup_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BindCapturePrompt_eventGetKeyGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Returns the key group used for this prompt\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Returns the key group used for this prompt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCapturePrompt, nullptr, "GetKeyGroup", nullptr, nullptr, sizeof(BindCapturePrompt_eventGetKeyGroup_Parms), Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_PrimaryKey = { "PrimaryKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BindCapturePrompt_eventIsKeyAllowed_Parms, PrimaryKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BindCapturePrompt_eventIsKeyAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BindCapturePrompt_eventIsKeyAllowed_Parms), &Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_PrimaryKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Subclasses can override to disallow keys based on the prompt\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Subclasses can override to disallow keys based on the prompt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBindCapturePrompt, nullptr, "IsKeyAllowed", nullptr, nullptr, sizeof(BindCapturePrompt_eventIsKeyAllowed_Parms), Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBindCapturePrompt_NoRegister()
	{
		return UBindCapturePrompt::StaticClass();
	}
	struct Z_Construct_UClass_UBindCapturePrompt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreGameViewportInputWhileCapturing_MetaData[];
#endif
		static void NewProp_bIgnoreGameViewportInputWhileCapturing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreGameViewportInputWhileCapturing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestrictKeyGroup_MetaData[];
#endif
		static void NewProp_bRestrictKeyGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictKeyGroup;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CaptureMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CaptureMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChordCaptured_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChordCaptured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChordRejected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChordRejected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCapturePromptClosed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCapturePromptClosed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeysDown_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeysDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeysDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousIgnoreInput_MetaData[];
#endif
		static void NewProp_PreviousIgnoreInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreviousIgnoreInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMouseDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccumulatedMouseDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBindCapturePrompt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettingsInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBindCapturePrompt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBindCapturePrompt_Cancel, "Cancel" }, // 760366922
		{ &Z_Construct_UFunction_UBindCapturePrompt_GetKeyGroup, "GetKeyGroup" }, // 1100216977
		{ &Z_Construct_UFunction_UBindCapturePrompt_IsKeyAllowed, "IsKeyAllowed" }, // 1981445074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Prompt that listens for an input chord and fires an event when it captures one\n */" },
		{ "IncludePath", "UI/BindCapturePrompt.h" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Prompt that listens for an input chord and fires an event when it captures one" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// If true, then will tell viewport to ignore all game input (leaving only UI input)\n// while capturing, then restore if when closed. If the game supports multiple local players\n// binding at the same time then this may be undesirable.\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "If true, then will tell viewport to ignore all game input (leaving only UI input)\nwhile capturing, then restore if when closed. If the game supports multiple local players\nbinding at the same time then this may be undesirable." },
	};
#endif
	void Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing_SetBit(void* Obj)
	{
		((UBindCapturePrompt*)Obj)->bIgnoreGameViewportInputWhileCapturing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing = { "bIgnoreGameViewportInputWhileCapturing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBindCapturePrompt), &Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// If true, only allow capturing keys in the passed in Key Group, otherwise the keys will be captured anyway\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "If true, only allow capturing keys in the passed in Key Group, otherwise the keys will be captured anyway" },
	};
#endif
	void Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup_SetBit(void* Obj)
	{
		((UBindCapturePrompt*)Obj)->bRestrictKeyGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup = { "bRestrictKeyGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBindCapturePrompt), &Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Should keys and mouse clicks be captured when they are pressed, or when they are released?\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Should keys and mouse clicks be captured when they are pressed, or when they are released?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode = { "CaptureMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCapturePrompt, CaptureMode), Z_Construct_UEnum_AutoSettingsInput_EBindingCaptureMode, METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeyGroup_MetaData[] = {
		{ "Comment", "// If valid and bRestrictKeyGroup is true, then only keys allowed by this Key Group will be captured\n// If a key is rejected for not being in the Key Group, then OnChordRejected will be fired\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "If valid and bRestrictKeyGroup is true, then only keys allowed by this Key Group will be captured\nIf a key is rejected for not being in the Key Group, then OnChordRejected will be fired" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeyGroup = { "KeyGroup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCapturePrompt, KeyGroup), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeyGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeyGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordCaptured_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Fired when an input chord is captured\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Fired when an input chord is captured" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordCaptured = { "OnChordCaptured", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCapturePrompt, OnChordCaptured), Z_Construct_UDelegateFunction_AutoSettingsInput_ChordCapturedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordCaptured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordCaptured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordRejected_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Fired when an input chord is rejected\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Fired when an input chord is rejected" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordRejected = { "OnChordRejected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCapturePrompt, OnChordRejected), Z_Construct_UDelegateFunction_AutoSettingsInput_ChordRejectedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordRejected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordRejected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnCapturePromptClosed_MetaData[] = {
		{ "Category", "Bind Capture Prompt" },
		{ "Comment", "// Fired when the capture prompt is closed\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Fired when the capture prompt is closed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnCapturePromptClosed = { "OnCapturePromptClosed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCapturePrompt, OnCapturePromptClosed), Z_Construct_UDelegateFunction_AutoSettingsInput_CapturePromptClosedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnCapturePromptClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnCapturePromptClosed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown_Inner = { "KeysDown", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown_MetaData[] = {
		{ "Comment", "// Keys that are currently down, used to collect modifiers\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Keys that are currently down, used to collect modifiers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown = { "KeysDown", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCapturePrompt, KeysDown), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput_MetaData[] = {
		{ "Comment", "// Value of viewport's \"ignore input\" before the prompt was opened\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Value of viewport's \"ignore input\" before the prompt was opened" },
	};
#endif
	void Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput_SetBit(void* Obj)
	{
		((UBindCapturePrompt*)Obj)->PreviousIgnoreInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput = { "PreviousIgnoreInput", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBindCapturePrompt), &Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_AccumulatedMouseDelta_MetaData[] = {
		{ "Comment", "// Total delta the mouse has moved\n" },
		{ "ModuleRelativePath", "Public/UI/BindCapturePrompt.h" },
		{ "ToolTip", "Total delta the mouse has moved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_AccumulatedMouseDelta = { "AccumulatedMouseDelta", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBindCapturePrompt, AccumulatedMouseDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_AccumulatedMouseDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_AccumulatedMouseDelta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBindCapturePrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bIgnoreGameViewportInputWhileCapturing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_bRestrictKeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_CaptureMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeyGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordCaptured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnChordRejected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_OnCapturePromptClosed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_KeysDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_PreviousIgnoreInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBindCapturePrompt_Statics::NewProp_AccumulatedMouseDelta,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBindCapturePrompt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBindCapturePrompt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBindCapturePrompt_Statics::ClassParams = {
		&UBindCapturePrompt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBindCapturePrompt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBindCapturePrompt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBindCapturePrompt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBindCapturePrompt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBindCapturePrompt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBindCapturePrompt, 2479477527);
	template<> AUTOSETTINGSINPUT_API UClass* StaticClass<UBindCapturePrompt>()
	{
		return UBindCapturePrompt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBindCapturePrompt(Z_Construct_UClass_UBindCapturePrompt, &UBindCapturePrompt::StaticClass, TEXT("/Script/AutoSettingsInput"), TEXT("UBindCapturePrompt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBindCapturePrompt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
