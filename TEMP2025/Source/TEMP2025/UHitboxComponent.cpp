#include "UHitboxComponent.h"

UHitboxComponent::UHitboxComponent()
{
    // 기본값 설정
    HitZoneType = EAttackDirection::None; 

    // 충돌 설정 (기본적으로 Query만, 필요한 경우 변경 가능)
    SetGenerateOverlapEvents(true);
    SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SetCollisionObjectType(ECC_WorldDynamic);
    SetCollisionResponseToAllChannels(ECR_Ignore);
    SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap); 
}
