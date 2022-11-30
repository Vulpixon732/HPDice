// Copyright 2019 DownToCode. All Rights Reserved.

#pragma once

#include "Editor/PropertyEditor/Public/IPropertyTypeCustomization.h"
#include "Editor/PropertyEditor/Public/IDetailChildrenBuilder.h"

//Property Editor
#include "Editor/PropertyEditor/Public/PropertyHandle.h"
#include "Editor/PropertyEditor/Public/IDetailChildrenBuilder.h"
#include "Editor/PropertyEditor/Public/DetailLayoutBuilder.h"
#include "Editor/PropertyEditor/Public/DetailWidgetRow.h"


#include "Runtime/Slate/Public/Widgets/Text/STextBlock.h"
#include "Runtime/Slate/Public/Widgets/Input/SEditableTextBox.h"
#include "Runtime/Slate/Public/Widgets/Layout/SBox.h"
#include "Runtime/Slate/Public/Widgets/Layout/SSplitter.h"
#include "Runtime/Slate/Public/Widgets/Layout/SBorder.h"
#include "Runtime/Slate/Public/Widgets/Input/STextComboBox.h"


class FEmailDetailsAssetCustomization : public IPropertyTypeCustomization
{
public:

	FEmailDetailsAssetCustomization();
	~FEmailDetailsAssetCustomization();

	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

private:
	TSharedPtr<STextBlock> RowText;
	TSharedPtr<SEditableTextBox> PasswordTextBox;
	TSharedPtr<STextBlock> EmailErrMsg;
	TSharedPtr<IPropertyHandle> Password;
	TSharedPtr<IPropertyHandle> PasswordInternal;
	TArray<TSharedPtr<FString>> EmailServices;

	bool TextManuallyChanged = false; 

	void StructTextChanged(const FText& InText, TSharedRef<IPropertyHandle> Property);

	void StructTextCommited(const FText& InText, ETextCommit::Type, TSharedRef<IPropertyHandle> Property);

	void HandleEmail(FString InText);

	EVisibility ValidateEmail(FString InText);

	void OnOptionChanged(TSharedPtr<FString> Selction, ESelectInfo::Type SelectInfo, TSharedRef<IPropertyHandle> Property);
};

