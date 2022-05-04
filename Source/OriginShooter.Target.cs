// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class OriginShooterTarget : TargetRules
{
	public OriginShooterTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
        bIWYU = true;
        ExtraModuleNames.Add("OriginShooter");
	}
}
