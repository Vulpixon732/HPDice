// Copyright 2019 DownToCode. All Rights Reserved.

#include "EmailPluginEditor.h"
#include "Runtime/Projects/Public/Interfaces/IPluginManager.h"
#include "Runtime/SlateCore/Public/Styling/SlateStyleRegistry.h"
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >=25
#include "EmailDetailsAssetFactory.h"
#include "Runtime/Launch/Resources/Version.h"
#endif
#include "AssetTools/Public/IAssetTools.h"
#include "PasswordPin.h"
#include "PasswordPinFactory.h"
#include "EmailDetailsAssetCustomization.h"
#include "EmailPluginStyle.h"
#include "EmailPluginCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Input/SButton.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"


static const FName EmailPluginTabName("EmailPluginInfo");

#define LOCTEXT_NAMESPACE "FEmailPluginEditorModule"

void FEmailPluginEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	StyleSet = MakeShareable(new FSlateStyleSet("EmailPluginStyle"));

	FString ContentDir = IPluginManager::Get().FindPlugin("EmailPlugin")->GetBaseDir();

	StyleSet->SetContentRoot(ContentDir);

	FSlateImageBrush* ThumbnailBrush = new FSlateImageBrush(StyleSet->RootToContentDir(TEXT("Resources/EmailAssetIcon128.png")), FVector2D(128.f, 128.f));
	
	if (ThumbnailBrush)
	{
		StyleSet->Set("ClassThumbnail.EmailDetailsAsset", ThumbnailBrush);
		FSlateStyleRegistry::RegisterSlateStyle(*StyleSet);
	}

	//Create your factory and shared pointer to it.
	TSharedPtr<FPasswordGraphPinFactory> GAAttributePanelGraphPinFactory = MakeShareable(new FPasswordGraphPinFactory());
	//And now register it.
	FEdGraphUtilities::RegisterVisualPinFactory(GAAttributePanelGraphPinFactory);

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >=25
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	AssetTools.RegisterAssetTypeActions(MakeShareable(new FAssetTypeActions_EmailDetails(EAssetTypeCategories::Misc)));
#endif

	{
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(TEXT("PropertyEditor"));
		PropertyModule.RegisterCustomPropertyTypeLayout(TEXT("UserDetails"), FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FEmailDetailsAssetCustomization::MakeInstance));
	}

	FEmailPluginStyle::Initialize();
	FEmailPluginStyle::ReloadTextures();

	FEmailPluginCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FEmailPluginCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FEmailPluginEditorModule::PluginButtonClicked),
		FCanExecuteAction());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FEmailPluginEditorModule::AddMenuExtension));
		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}

	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender());
		//ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FEmailPluginEditorModule::AddToolbarExtension));
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(EmailPluginTabName, FOnSpawnTab::CreateRaw(this, &FEmailPluginEditorModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FEmailPluginTabTitle", "Email Plugin Info"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FEmailPluginEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEmailPluginStyle::Shutdown();

	FEmailPluginCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(EmailPluginTabName);
}

TSharedRef<SDockTab> FEmailPluginEditorModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	TMap<FString, FString> ReferenceButtonList;
	ReferenceButtonList.Add(FString("Discord Channel"), FString("https://discord.gg/4gGAfX"));
	ReferenceButtonList.Add(FString("UE4 Forum"), FString("https://forums.unrealengine.com/unreal-engine/marketplace/1664217-email-plugin"));
	ReferenceButtonList.Add(FString("What's new"), FString("https://drive.google.com/open?id=1akhX8wxXcmLFYs7YBqztTNhsWGJ5_uRN"));

	TMap<FString, FString> SetupButtonList;
	SetupButtonList.Add(FString("Gmail Allow Third Party"), FString("https://drive.google.com/open?id=1Lxnppgs8cZ9phYnGxobj5FZyG0J2H3-S"));
	SetupButtonList.Add(FString("Gmail App Password Set Up"), FString("https://drive.google.com/open?id=1hUFafW8r8pS0ESZd8SuRrTKJW10NOx2j"));
	SetupButtonList.Add(FString("Outlook Allow Third Party"), FString("https://drive.google.com/open?id=18K7rSLPx9o_D6B-FBZCiDC_s2_VUuU2Y"));
	SetupButtonList.Add(FString("Outlook App Password Set Up"), FString("https://drive.google.com/open?id=1LCAG8XvKn9eiz6qrYLhUZJ2TxsCSpWAw"));
	SetupButtonList.Add(FString("Yahoo Allow Third Party"), FString("https://drive.google.com/open?id=1Jcxv6HHowJ1FimXjfupVORu95Cw_Qx0A"));
	SetupButtonList.Add(FString("Yahoo App Password Set Up"), FString("https://drive.google.com/open?id=1DJzp7UJ-n3VkgKW3ERbjsvpAnWbIAxOA"));
	SetupButtonList.Add(FString("Android Packaging"), FString("https://drive.google.com/open?id=1tfvHBbbzH570_qMQxhC_a8viBSXULUQf"));

	TMap<FString, FString> NodeButtonList;
	NodeButtonList.Add(FString("Send Email"), FString("https://drive.google.com/open?id=1xZD-DQ26m-pUDKFi6I3vStLkJ3rIN1x-"));
	NodeButtonList.Add(FString("Send Email Object"), FString("https://drive.google.com/open?id=1EchAoJc8_DHmbho4yylx3MwUfQv3kX9t"));
	NodeButtonList.Add(FString("Send Email (Custom SMTP Server)"), FString("https://drive.google.com/open?id=1_WFKY6_cADnw6TbUzLOZh0BwhHBlNbUB"));
	NodeButtonList.Add(FString("Make Email Details Node"), FString("https://drive.google.com/open?id=1rbQkxOnGxb_1QxRA1Kmyru7cLycr7Ws6"));
	NodeButtonList.Add(FString("Make Email Details From Asset"), FString("https://drive.google.com/open?id=14xm4MU5iA7ItsdzGZgudcJBlAC6cBOYa"));
	NodeButtonList.Add(FString("EmailDetailsAsset"), FString("https://drive.google.com/open?id=1ehI1gx3hPfbOkVDgZY1KjgO1AtrMcBKM"));
	NodeButtonList.Add(FString("Get HTML For Embedded Attachment"), FString("https://drive.google.com/open?id=1HeI8WY_zQFyTDyBOlEMuXCJq_D_c0IFV"));
	NodeButtonList.Add(FString("Get HTML For URL Embedded Attachment"), FString("https://drive.google.com/open?id=19b8MDY6yv-k3GUizu98JNfCFzSq2kWsq"));
	NodeButtonList.Add(FString("Get Users From Email Details Asset"), FString("https://drive.google.com/open?id=16pHo5iY1Oc9RdScnP2XqUPzeJa_FlrRc"));
	NodeButtonList.Add(FString("Save Capture Component 2D"), FString("https://drive.google.com/open?id=1ww-Z1c2FFvdN253OSCjQcqY_5ackFJva"));
	NodeButtonList.Add(FString("Delete File"), FString("https://drive.google.com/open?id=1ioEng_T-UwqWFE4zOCZfBJWzfFXxHWJK"));
	NodeButtonList.Add(FString("Does File Exist"), FString("https://drive.google.com/open?id=1nHQqrhu3CRmR9Pk9edRVoGpYMloxyLxM"));
	NodeButtonList.Add(FString("GetAndroidGamePath"), FString("https://drive.google.com/open?id=1A3Edl2zf8s9_xp6jIgYB11jVK3vR4tZo"));
	NodeButtonList.Add(FString("ConvertToArrayLines"), FString("https://drive.google.com/open?id=1g7Aw_o1VM6AnSg3iIbg2lFEyKYi2rWcg"));

	TSharedPtr<SVerticalBox> VerticalBox = SNew(SVerticalBox);

	VerticalBox->AddSlot().AutoHeight().Padding(FMargin(0, 0, 0, 30))[MakeTitle("References")];
	for (const TPair<FString, FString>& Pair : ReferenceButtonList)
	{
		VerticalBox->AddSlot().AutoHeight().Padding(FMargin(0, 0, 0, 15))[MakeLinkButton(Pair.Key, Pair.Value)];
	}

	VerticalBox->AddSlot().AutoHeight().Padding(FMargin(0, 0, 0, 30))[MakeTitle("Email Plugin Tutorial Material")];
	VerticalBox->AddSlot().AutoHeight().Padding(FMargin(0, 0, 0, 30))[MakeLinkButton(FString("PDF Documentation"), FString("https://drive.google.com/open?id=1StVCNzHIb8fb_k5u1_u9sfoojTfbeMoz"))];
	VerticalBox->AddSlot().AutoHeight().Padding(FMargin(0, 0, 0, 30))[MakeTitle("Set up video tutorials")];

	for (const TPair<FString, FString>& Pair : SetupButtonList)
	{
		VerticalBox->AddSlot().AutoHeight().Padding(FMargin(0, 0, 0, 15))[MakeLinkButton(Pair.Key, Pair.Value)];
	}

	VerticalBox->AddSlot().AutoHeight().Padding(FMargin(0, 0, 0, 30))[MakeTitle("Node Video Tutorials")];

	for (const TPair<FString, FString>& Pair : NodeButtonList)
	{
		VerticalBox->AddSlot().AutoHeight().Padding(FMargin(0, 0, 0, 15))[MakeLinkButton(Pair.Key, Pair.Value)];
	}

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			SNew(SScrollBox)
			.Orientation(EOrientation::Orient_Vertical)
			+SScrollBox::Slot()
			[
				VerticalBox.ToSharedRef()
			]
		];
}

TSharedRef<SBox> FEmailPluginEditorModule::MakeLinkButton(FString ButtonText, FString url)
{
	return SNew(SBox)
		.WidthOverride(200)
		.HeightOverride(50)
		.MaxDesiredWidth(200)
		.MinDesiredWidth(200)
		.MaxDesiredHeight(50)
		.MinDesiredHeight(50)
		[
			SNew(SButton)
			.HAlign(EHorizontalAlignment::HAlign_Center)
			.VAlign(EVerticalAlignment::VAlign_Center)
			.OnClicked_Lambda([=]() {FPlatformProcess::LaunchURL(*url, nullptr, nullptr); return FReply::Handled(); })
			[
				SNew(STextBlock)
				.Text(FText::FromString(ButtonText))
				.Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Light.ttf"), 24))
			]
		];
}

TSharedRef<STextBlock> FEmailPluginEditorModule::MakeTitle(FString TitleText)
{
	return SNew(STextBlock)
		.Justification(ETextJustify::Center)
		.Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Light.ttf"), 26))
		.Text(FText::FromString(TitleText));
}

void FEmailPluginEditorModule::PluginButtonClicked()
{
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION < 26
	FGlobalTabmanager::Get()->InvokeTab(EmailPluginTabName);
#else 
	FGlobalTabmanager::Get()->TryInvokeTab(EmailPluginTabName);
#endif
}

void FEmailPluginEditorModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FEmailPluginCommands::Get().OpenPluginWindow);
}

void FEmailPluginEditorModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FEmailPluginCommands::Get().OpenPluginWindow);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEmailPluginEditorModule, EmailPluginEditor)