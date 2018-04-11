// Fill out your copyright notice in the Description page of Project Settings.
#include "ControllerPulled.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

#include "Runtime/Core/Public/Misc/CoreDelegates.h"

// Sets default values
AControllerPulled::AControllerPulled()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AControllerPulled::BeginPlay()
{
	Super::BeginPlay();

	OnControllerConnectionHandle = FCoreDelegates::OnControllerConnectionChange.AddUFunction(this, FName("OnControllerConnectionChange"));
	
}

void AControllerPulled::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	FCoreDelegates::OnControllerConnectionChange.Remove(OnControllerConnectionHandle);
}

void AControllerPulled::OnControllerConnectionChange_Implementation(bool Connected,int32 UserID,int32 ControllerID)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f,FColor::Green,FString::Printf(TEXT("Connection Change ControllerID: x: %d, Connected : %d"),ControllerID,Connected));

}

// Called every frame
void AControllerPulled::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

