
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "cppClosestPointLibrary.generated.h"


UCLASS()
class TEMP2025_API UcppClosestPointLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Combat")
    static bool GetClosestPointRelativeToActor(
        AActor* TargetActor,
        UPrimitiveComponent* TargetComponent,
        const FVector& HitOrigin,
        FVector& OutLocalPoint);
};
