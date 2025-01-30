#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "cppdataBaseManager.h"
#include "Temp2025GameInstance.generated.h"

UCLASS()
class TEMP2025_API UTemp2025GameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly, Category = "Database")
    UcppdataBaseManager* DBManager;  // 데이터베이스 매니저인스턴스

    virtual void Init() override;  // 시작 시 실행
};
