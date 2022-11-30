// Copyright 2019 DownToCode. All Rights Reserved.

#include "PasswordPin.h"
#include "Editor/UnrealEd/Public/Kismet2/KismetEditorUtilities.h"
#include "Runtime/Slate/Public/Widgets/Input/STextComboBox.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraph/EdGraphSchema.h"
#include "ScopedTransaction.h"

void SPasswordPin::Construct(const FArguments& InArgs, UEdGraphPin* InGraphPinObj, UEdGraphPin* InPasswordPin)
{
	SGraphPin::Construct(SGraphPin::FArguments(), InGraphPinObj);
	this->PasswordPin = InPasswordPin;
}

TSharedRef<SWidget>	SPasswordPin::GetDefaultValueWidget()
{
	return SNew(SBox)
	.MinDesiredWidth(18)
	.MaxDesiredHeight(200)
	[
		SAssignNew(Textbox,SEditableTextBox)
		.Style(FEditorStyle::Get(), "Graph.EditableTextBox")
		.IsPassword(true)
		.Text(this, &SPasswordPin::GetTypeInValue)
		.SelectAllTextWhenFocused(false)
		.Visibility(this, &SPasswordPin::GetDefaultValueVisibility)
		.IsReadOnly(this, &SPasswordPin::GetDefaultValueIsReadOnly)
		.ForegroundColor(FSlateColor::UseForeground())
		.OnTextCommitted(this, &SPasswordPin::SetTypeInValue)
	];
}

FText SPasswordPin::GetTypeInValue() const
{
	return FText::FromString(GraphPinObj->GetDefaultAsString());
}

bool SPasswordPin::GetDefaultValueIsReadOnly() const
{
	return GraphPinObj->bDefaultValueIsReadOnly;
}

void SPasswordPin::SetTypeInValue(const FText& NewTypeInValue, ETextCommit::Type /*CommitInfo*/)
{
	if (!GraphPinObj->GetDefaultAsString().Equals(NewTypeInValue.ToString()))
	{
		const FScopedTransaction Transaction(NSLOCTEXT("GraphEditor", "ChangeStringPinValue", "Change String Pin Value"));
		GraphPinObj->Modify();
		GraphPinObj->GetSchema()->TrySetDefaultValue(*GraphPinObj, NewTypeInValue.ToString());
	}
}
