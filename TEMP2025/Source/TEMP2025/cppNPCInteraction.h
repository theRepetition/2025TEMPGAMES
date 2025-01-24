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

	// ����ü �����͸� ó���ϴ� �Լ� (�������Ʈ���� ȣ�� ����)
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void ProcessPlayerState(const FString& PlayerName, const FString& TestString);
};
