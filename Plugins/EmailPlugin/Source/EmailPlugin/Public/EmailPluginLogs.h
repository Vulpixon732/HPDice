// Copyright 2019 DownToCode. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(LogEmailPlugin, Log, All);

UENUM(BlueprintType)
enum class EEmailResult : uint8
{
	Success,
	Fail,
	None
};