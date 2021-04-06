// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4_RTSGameMode.h"
#include "UE4_RTSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_RTSGameMode::AUE4_RTSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
