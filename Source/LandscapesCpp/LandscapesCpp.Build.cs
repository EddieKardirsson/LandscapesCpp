// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LandscapesCpp : ModuleRules
{
	public LandscapesCpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "FastNoiseGenerator", "FastNoise","Landscape", "ProceduralMeshComponent", "RuntimeMeshComponent" });
	}
}
