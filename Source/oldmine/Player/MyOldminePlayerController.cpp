// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MyOldminePlayerController.h"

void AMyOldminePlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly GameOnlyInputMode;
	SetInputMode(GameOnlyInputMode);
}
