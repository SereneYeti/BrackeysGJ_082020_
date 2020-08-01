// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BrackeysGJ_082020_ : ModuleRules
{
	public BrackeysGJ_082020_(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
