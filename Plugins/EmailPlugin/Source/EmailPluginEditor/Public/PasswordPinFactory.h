// Copyright 2019 DownToCode. All Rights Reserved.

#pragma once

#include "EdGraph/EdGraphPin.h"
#include "EdGraph/EdGraphSchema.h"
#include "EdGraphSchema_K2.h"
#include "PasswordPin.h"
#include "SelectedUserPin.h"
#include "K2Node_CallFunction.h"
#include "EdGraphUtilities.h"

class FPasswordGraphPinFactory : public FGraphPanelPinFactory
{
	virtual TSharedPtr<class SGraphPin> CreatePin(class UEdGraphPin* InPin) const override
	{
		const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
		
		UK2Node_CallFunction* Function = Cast<UK2Node_CallFunction>(InPin->GetOwningNode());
		if (Function)
		{
			if (Function->GetUserFacingFunctionName(Function->GetTargetFunction()).ToString() == "Make Email Details")
			{
				if (InPin->PinType.PinCategory == K2Schema->PC_String && InPin->PinName == "Password")
				{
					UEdGraphPin* PasswordPin = Function->FindPin(TEXT("Password"));
					return SNew(SPasswordPin, InPin, PasswordPin);
				}
			}

			if (Function->GetUserFacingFunctionName(Function->GetTargetFunction()).ToString() == "Make Email Details From Asset")
			{
				if (InPin->PinType.PinCategory == K2Schema->PC_Name && InPin->PinName == "SelectedUser")
				{
					UEdGraphPin* EmailDetailsAssetPin = Function->FindPin(TEXT("EmailDetailsAsset"));
					return SNew(SSelectedUserPin, InPin, EmailDetailsAssetPin);
				}
			}
		}
		
		return nullptr;
	}
};