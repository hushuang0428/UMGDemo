// Copyright Epic Games, Inc. All Rights Reserved.

#include "WLANDemoGameMode.h"
#include "WLANDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWLANDemoGameMode::AWLANDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
  