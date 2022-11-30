// Copyright 2019 DownToCode. All Rights Reserved.

#include "EmailPluginCommands.h"

#define LOCTEXT_NAMESPACE "FEmailPluginEditorModule"

void FEmailPluginCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "EmailPlugin", "Brings up EmailPlugin Tutorial Material window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE