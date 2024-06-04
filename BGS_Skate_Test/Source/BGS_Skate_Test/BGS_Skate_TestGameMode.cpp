// Copyright Epic Games, Inc. All Rights Reserved.

#include "BGS_Skate_TestGameMode.h"
#include "BGS_Skate_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABGS_Skate_TestGameMode::ABGS_Skate_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
