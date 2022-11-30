// Copyright 2019 DownToCode. All Rights Reserved.

#include "EmailDetailsAssetCustomization.h"
#include "Runtime/Core/Public/Internationalization//Regex.h"
#include "SendEmailLatent.h"
#include "EmailPluginLogs.h"

#define LOCTEXT_NAMESPACE "EmailDetailsAssetCustomization"

FEmailDetailsAssetCustomization::FEmailDetailsAssetCustomization()
{
	EmailServices.Add(MakeShareable<FString>(new FString("GMAIL")));
	EmailServices.Add(MakeShareable<FString>(new FString("OUTLOOK")));
	EmailServices.Add(MakeShareable<FString>(new FString("YAHOO")));
}

FEmailDetailsAssetCustomization::~FEmailDetailsAssetCustomization()
{
	
}

TSharedRef<IPropertyTypeCustomization> FEmailDetailsAssetCustomization::MakeInstance()
{
	return MakeShareable(new FEmailDetailsAssetCustomization());
}

void FEmailDetailsAssetCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	FString UserName;
	StructPropertyHandle->GetChildHandle(0)->GetValue(UserName);

	HeaderRow.NameContent()
	[
			StructPropertyHandle->CreatePropertyNameWidget()
	]
	.ValueContent()
	.MinDesiredWidth(500)
	[
		SAssignNew(RowText, STextBlock)
		.Text(FText::FromString(UserName))
		.Font(IDetailLayoutBuilder::GetDetailFont())
	];
}

void FEmailDetailsAssetCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	uint32 ChildrenNum;
	StructPropertyHandle->GetNumChildren(ChildrenNum);

	for (uint32 i = 0; i < ChildrenNum; i++)
	{
		/* If the property is the password internal store property and don't add widget**/
		TSharedRef<IPropertyHandle> Property = StructPropertyHandle->GetChildHandle(i).ToSharedRef();
		FString Value;
		Property->GetValue(Value);
		FString PropertyName = Property->GetPropertyDisplayName().ToString();
		TSharedPtr<SEditableTextBox> Textbox;
		TSharedPtr<STextBlock> ErrMsg = SNew(STextBlock);

		if (PropertyName == "Email")
		{
			EmailErrMsg = SAssignNew(EmailErrMsg, STextBlock)
									.Text(FText::FromString("The email entered doesn't appear to be valid. Double check."))
									.Margin(FMargin(50.0f, 0))
									.ColorAndOpacity(FLinearColor::Red)
									.MinDesiredWidth(200.0f)
									.Visibility(ValidateEmail(Value));
			ErrMsg = EmailErrMsg;
		}
			
		if (PropertyName == "Password")
		{
			Password = Property;
			PasswordTextBox = SAssignNew(PasswordTextBox, SEditableTextBox)
							.IsPassword(true)
							.Text(FText::FromString(Value))
							.OnTextChanged(this, &FEmailDetailsAssetCustomization::StructTextChanged, Property)
							.MinDesiredWidth(200.0f);
								
			Textbox = PasswordTextBox;
		}
		else
		{
			Textbox = SNew(SEditableTextBox)
					.Text(FText::FromString(Value))
					.OnTextCommitted(this, &FEmailDetailsAssetCustomization::StructTextCommited, Property)
					.OnTextChanged(this, &FEmailDetailsAssetCustomization::StructTextChanged, Property)
					.MinDesiredWidth(200.0f);
		}

		if (PropertyName == "Email Service")
		{
			uint8 EnumValueAsInt;
			Property->GetValue(EnumValueAsInt);
			EEmailType EmailType = static_cast<EEmailType>(EnumValueAsInt);
			TSharedPtr<FString> DefaultOption;

			switch (EmailType)
			{
			case EEmailType::GMAIL:
				DefaultOption = EmailServices[0];
				break;
			case EEmailType::OUTLOOK:
				DefaultOption = EmailServices[1];
				break;
			case EEmailType::YAHOO:
				DefaultOption = EmailServices[2];
				break;
			default:
				break;
			}

			StructBuilder.AddProperty(Property).CustomWidget(false)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString(PropertyName))
					.MinDesiredWidth(200.0f)
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextComboBox)
					.OptionsSource(&EmailServices)
					.OnSelectionChanged(this, &FEmailDetailsAssetCustomization::OnOptionChanged, Property)
					.InitiallySelectedItem(DefaultOption)
				]
			];
		}
		else if(Property->IsValidHandle())
		{
			StructBuilder.AddProperty(Property).CustomWidget(false)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)		
					.Text(FText::FromString(PropertyName))
					.MinDesiredWidth(200.0f)
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				[
					Textbox.ToSharedRef()	
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					ErrMsg.ToSharedRef()
				]
			];
		}
	}
}

void FEmailDetailsAssetCustomization::StructTextChanged(const FText& InText, TSharedRef<IPropertyHandle> Property)
{
	if(Property->GetPropertyDisplayName().ToString() == "User" && RowText) RowText->SetText(InText);
	Property->SetValue(InText.ToString());
}

void FEmailDetailsAssetCustomization::StructTextCommited(const FText& InText, ETextCommit::Type, TSharedRef<IPropertyHandle> Property)
{
	if (Property->GetPropertyDisplayName().ToString() == "Email") HandleEmail(InText.ToString());
}

void FEmailDetailsAssetCustomization::HandleEmail(FString InText)
{
	EmailErrMsg->SetVisibility(ValidateEmail(InText));	
}

EVisibility FEmailDetailsAssetCustomization::ValidateEmail(FString InText)
{
	const FRegexPattern Pattern(TEXT("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+"));
	FRegexMatcher Matcher(Pattern, InText);

	if (!Matcher.FindNext())
		return EVisibility::Visible;
	else
		return EVisibility::Hidden;
}

void FEmailDetailsAssetCustomization::OnOptionChanged(TSharedPtr<FString> Option, ESelectInfo::Type SelectInfo, TSharedRef<IPropertyHandle> Property)
{
	EEmailType EmailType = EEmailType::GMAIL;
	if (*Option == "GMAIL")
		EmailType = EEmailType::GMAIL;
	else if (*Option == "OUTLOOK")
		EmailType = EEmailType::OUTLOOK;
	else if (*Option == "YAHOO")
		EmailType = EEmailType::YAHOO;

	Property->SetValue((uint8)EmailType);
}

#undef LOCTEXT_NAMESPACE
