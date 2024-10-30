// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "oldminePlayerController.h"
#include "MyOldminePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class OLDMINE_API AMyOldminePlayerController : public AoldminePlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
};
