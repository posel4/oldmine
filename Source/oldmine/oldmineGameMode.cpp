// Copyright Epic Games, Inc. All Rights Reserved.

#include "oldmineGameMode.h"
#include "oldmineCharacter.h"
#include "UObject/ConstructorHelpers.h"

AoldmineGameMode::AoldmineGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
