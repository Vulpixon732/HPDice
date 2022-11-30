// Copyright 2019 DownToCode. All Rights Reserved.

#pragma once

#include "Runtime/Slate/Public/Widgets/Input/SMultiLineEditableTextBox.h"
#include "Runtime/Slate/Public/Widgets/Input/SEditableTextBox.h"
#include "SGraphPin.h"

class SPasswordPin : public SGraphPin 
{
public:
	SLATE_BEGIN_ARGS(SPasswordPin) {}
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs, UEdGraphPin* InGraphPinObj, UEdGraphPin* InPasswordPin);

	virtual TSharedRef<SWidget> GetDefaultValueWidget() override;

	FText GetTypeInValue() const;
	bool GetDefaultValueIsReadOnly() const;
	void SetTypeInValue(const FText& NewTypeInValue, ETextCommit::Type /*CommitInfo*/);

	TSharedPtr<SEditableTextBox> Textbox;
private:
	UEdGraphPin* PasswordPin;
	FString PasswordInternal;
	bool Update = true;
};