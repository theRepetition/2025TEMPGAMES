#include "cppNPCInteraction.h"


UcppNPCInteraction::UcppNPCInteraction()
{

	PrimaryComponentTick.bCanEverTick = true;
}

void UcppNPCInteraction::ProcessPlayerState(const FString& PlayerName, const FString& TestString)
{
	// 전달받은 데이터 출력
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
			FString::Printf(TEXT("Player Name: %s, Test String: %s"),
				*PlayerName, *TestString));
	}
}
