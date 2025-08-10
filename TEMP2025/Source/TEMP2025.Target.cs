using UnrealBuildTool;
using System.Collections.Generic;

public class TEMP2025Target : TargetRules
{
    public TEMP2025Target(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;

        // 최신 엔진에 맞는 빌드 설정
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

        ExtraModuleNames.AddRange(new string[] { "TEMP2025" });
    }
}
