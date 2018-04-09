// Fill out your copyright notice in the Description page of Project Settings.

#include "ControllerPulls.h"
#include "SlateBasics.h"

bool UControllerPulls::IsGamePadConnected()
{
	auto genericApplication = FSlateApplication::Get().GetPlatformApplication();
	if (genericApplication.Get() != nullptr && genericApplication->IsGamepadAttached())
	{
		return true;
	}
	return false;
}



