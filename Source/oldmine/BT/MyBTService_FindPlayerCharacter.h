// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "MyBTService_FindPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class OLDMINE_API UMyBTService_FindPlayerCharacter : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UMyBTService_FindPlayerCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
