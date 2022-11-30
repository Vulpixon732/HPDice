// Copyright 2019 DownToCode. All Rights Reserved.

#include "SelectedUserPin.h"
#include "EmailDetailsAsset.h"
#include "Editor/UnrealEd/Public/Kismet2/KismetEditorUtilities.h"
#include "Runtime/Slate/Public/Widgets/Input/STextComboBox.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraph/EdGraphSchema.h"
#include "ScopedTransaction.h"


void SSelectedUserPin::Construct(const FArguments& InArgs, UEdGraphPin* InGraphPinObj, UEdGraphPin* EmailDetailsPin)
{
	this->EmailDetailsAssetPin = EmailDetailsPin;
	GetOptions();
	SGraphPinNameList::Construct(SGraphPinNameList::FArguments(), InGraphPinObj, AttributesList);
}

void SSelectedUserPin::GetOptions()
{
	if (EmailDetailsAssetPin->DefaultObject->IsValidLowLevel())
	{
		UEmailDetailsAsset* EmailDetailsAsset = Cast<UEmailDetailsAsset>(EmailDetailsAssetPin->DefaultObject);
		if (EmailDetailsAsset->IsValidLowLevel())
		{
			AttributesList.Empty();
			for (FUserDetails UserDetails : EmailDetailsAsset->UserDetailsList)
			{
				AttributesList.Add(MakeShareable(new FName(*UserDetails.User)));
			}
		}
	}
	else
	{
		AttributesList.Empty();
	}
}

