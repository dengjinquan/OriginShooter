// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OriginShooter : ModuleRules
{
	public OriginShooter(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

        PublicIncludePaths.AddRange(
            new string[]{
                "OriginShooter/Public/Gameplay"
            });
    }
}
