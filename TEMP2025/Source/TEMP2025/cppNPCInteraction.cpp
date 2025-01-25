#include "cppNPCInteraction.h"

UcppNPCInteraction::UcppNPCInteraction()
{
    PrimaryComponentTick.bCanEverTick = true;
}
EPlayerRelation UcppNPCInteraction::GetRelationFromValue(int32 RelationshipValue) const
{
    if (RelationshipValue < 0)
    {
        return EPlayerRelation::Hostile;
    }
    else if (RelationshipValue > 50)
    {
        return EPlayerRelation::Friendly;
    }
    else
    {
        return EPlayerRelation::Neutral;
    }
}

void UcppNPCInteraction::ProcessPlayerState(const FString& PlayerName, const FString& TestString, EPlayerRelation PlayerRelation)
{
    // 
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
            FString::Printf(TEXT("Player Name: %s, Test String: %s"),
                *PlayerName, *TestString));
    }

    // 
    switch (PlayerRelation)
    {
    case EPlayerRelation::Neutral:
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
                TEXT("NPC:중립 "));
        }
        break;

    case EPlayerRelation::Friendly:
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
                TEXT("NPC:동맹 "));
        }
        break;

    case EPlayerRelation::Hostile:
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
                TEXT("NPC: 적대"));
        }
        break;

    default:
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
                TEXT("NPC: ."));
        }
        break;
    }
    
}

// 관계도 기반으로 정리
void UcppNPCInteraction::ProcessPlayerStateWithValue(const FString& PlayerName, const FString& TestString, int32 RelationshipValue)
{
    EPlayerRelation Relation = GetRelationFromValue(RelationshipValue);
    ProcessPlayerState(PlayerName, TestString, Relation);
}
