// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DisplayGamertag.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER1_API UDisplayGamertag : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "DisplayGamertag"), Category = "System Information")
		static void DisplayGamertag();
	
	
};
