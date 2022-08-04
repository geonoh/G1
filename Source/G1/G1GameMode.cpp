// Copyright Epic Games, Inc. All Rights Reserved.

#include "G1GameMode.h"
#include "G1Character.h"
#include "UObject/ConstructorHelpers.h"

AG1GameMode::AG1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
