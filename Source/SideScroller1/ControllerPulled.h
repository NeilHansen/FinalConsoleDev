// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControllerPulled.generated.h"

UCLASS()
class SIDESCROLLER1_API AControllerPulled : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AControllerPulled();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();
	virtual	void EndPlay(const	EEndPlayReason::Type EndPlayReason);
	FDelegateHandle	OnControllerConnectionHandle;

	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input")
		void OnControllerConnectionChange(bool	Connected,	int32 UserID, int32	ControllerID);

	
	
};
