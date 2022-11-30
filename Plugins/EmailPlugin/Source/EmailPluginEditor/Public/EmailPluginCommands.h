// Copyright 2019 DownToCode. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "EmailPluginStyle.h"

/**
 * 
 */
class FEmailPluginCommands : public TCommands<FEmailPluginCommands>
{
public:

	FEmailPluginCommands()
		: TCommands<FEmailPluginCommands>(TEXT("EmailPlugin"), NSLOCTEXT("Contexts", "EmailPlugin", "EmailPlugin Plugin"), NAME_None, FEmailPluginStyle::GetStyleSetName())
	{}

	virtual void RegisterCommands() override;

public:
	TSharedPtr<FUICommandInfo> OpenPluginWindow;
};
