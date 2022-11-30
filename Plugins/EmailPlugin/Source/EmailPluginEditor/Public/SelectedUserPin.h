// Copyright 2019 DownToCode. All Rights Reserved.

#pragma once

#include "Editor/GraphEditor/Public/KismetPins/SGraphPinObject.h" 
#include "Editor/GraphEditor/Public/SGraphPinNameList.h"
#include "SGraphPin.h"

class SSelectedUserPin : public SGraphPinNameList 
{
public:
	SLATE_BEGIN_ARGS(SSelectedUserPin) {}
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, UEdGraphPin* InGraphPinObj, UEdGraphPin* EmailDetailsPin);

private:
	void GetOptions();

	TArray<TSharedPtr<FName>> AttributesList;
	UEdGraphPin* EmailDetailsAssetPin;

	bool Update = true;
};