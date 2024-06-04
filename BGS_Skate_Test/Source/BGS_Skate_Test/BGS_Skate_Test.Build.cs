// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BGS_Skate_Test : ModuleRules
{
	public BGS_Skate_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
