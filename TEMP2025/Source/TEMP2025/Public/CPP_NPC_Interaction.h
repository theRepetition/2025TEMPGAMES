// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CPP_NPC_Interaction.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEMP2025_API UCPP_NPC_Interaction : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCPP_NPC_Interaction();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void ShowDialogue();

private:
	// NPC에서 대화 데이터를 가져오는 내부 함수
	FString GetDialogueLine() const;
		
};
