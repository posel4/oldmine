// Fill out your copyright notice in the Description page of Project Settings.


#include "BT/MyBTService_FindPlayerCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

UMyBTService_FindPlayerCharacter::UMyBTService_FindPlayerCharacter(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    NodeName = TEXT("PlayerCharacter 갱신");
    bNotifyTick = true;
}

void UMyBTService_FindPlayerCharacter::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    check(PC);

    ACharacter* Character = PC->GetCharacter();
    check(Character);

    UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
    check(BlackboardComp);

    BlackboardComp->SetValueAsVector(BlackboardKey.SelectedKeyName, Character->GetActorLocation());
}
