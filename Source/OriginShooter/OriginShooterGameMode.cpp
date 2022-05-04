// Copyright Epic Games, Inc. All Rights Reserved.

#include "OriginShooterGameMode.h"
#include "OriginShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOriginShooterGameMode::AOriginShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
