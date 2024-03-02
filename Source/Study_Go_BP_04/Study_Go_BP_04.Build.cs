// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Study_Go_BP_04 : ModuleRules
{
	public Study_Go_BP_04(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
