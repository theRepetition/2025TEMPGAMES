#include "cppClosestPointLibrary.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/Actor.h"

bool UcppClosestPointLibrary::GetClosestPointRelativeToActor(
    AActor* TargetActor,
    UPrimitiveComponent* TargetComponent,
    const FVector& HitOrigin,
    FVector& OutLocalPoint)
{
    if (!TargetActor || !TargetComponent) return false;

    FVector WorldClosestPoint;
    float Distance = TargetComponent->GetClosestPointOnCollision(HitOrigin, WorldClosestPoint);
    if (Distance < 0.f) return false;

    // 월드 → 로컬 좌표 변환 (피격자 기준)
    OutLocalPoint = TargetActor->GetTransform().InverseTransformPosition(WorldClosestPoint);
    return true;
}
