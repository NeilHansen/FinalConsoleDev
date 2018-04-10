// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ControllerPulls.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER1_API UControllerPulls : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/* Check if gamepad is connected at Runtime. */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GamepadConnected"), Category = "System Information")
		static bool IsGamePadConnected();
	
	
};
