#pragma once

#include "CoreMinimal.h"
#include "DialogueStruct.generated.h"


USTRUCT(BlueprintType)
struct FDialogueData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName DialogueID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FText DialogueText;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName NPCID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Step; // 0: 인사, 1: 중간대화, 2: 거래, 3: 종료
};
