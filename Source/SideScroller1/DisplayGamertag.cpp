// Fill out your copyright notice in the Description page of Project Settings.

#include "DisplayGamertag.h"
#include"Online.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

void UDisplayGamertag::DisplayGamertag()
{
	
		auto OnlineSub	= IOnlineSubsystem::Get();
	if(OnlineSub !=	nullptr)
	{
		auto userIdentityPtr = OnlineSub->GetIdentityInterface();
		if(userIdentityPtr.IsValid())
		{
			FString	nickname =	OnlineSub->GetIdentityInterface()->GetPlayerNickname(0);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(*nickname));
		}
	}

}
