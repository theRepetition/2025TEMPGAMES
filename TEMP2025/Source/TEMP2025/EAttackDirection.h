UENUM(BlueprintType)
enum class EAttackDirection : uint8
{
    None    UMETA(DisplayName = "None"),
    Left    UMETA(DisplayName = "Left"),
    Right   UMETA(DisplayName = "Right"),
    Up      UMETA(DisplayName = "Up"),
    Med    UMETA(DisplayName = "Med"),
    Back UMETA(DisplayName = "Back"),
};