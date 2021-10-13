// Copyright Epic Games, Inc. All Rights Reserved.

#include "LandscapesCppGameMode.h"
#include "LandscapesCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALandscapesCppGameMode::ALandscapesCppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
