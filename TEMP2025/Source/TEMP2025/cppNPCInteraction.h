#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "cppNPCInteraction.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEMP2025_API UcppNPCInteraction : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UcppNPCInteraction();

	// 구조체 데이터를 처리하는 함수 (블루프린트에서 호출 가능)
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void ProcessPlayerState(const FString& PlayerName, const FString& TestString);
};
