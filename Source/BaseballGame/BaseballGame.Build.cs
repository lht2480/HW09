// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BaseballGame : ModuleRules
{
	public BaseballGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput",


            "UMG", "Slate", "SlateCore",

        });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        PublicIncludePaths.AddRange(new string[] { "BaseballGame" });
    }
}
