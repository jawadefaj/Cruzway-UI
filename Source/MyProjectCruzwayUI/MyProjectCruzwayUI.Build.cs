// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class MyProjectCruzwayUI : ModuleRules
{
	public MyProjectCruzwayUI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		// add UnrealEd - module for Kismet functions
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UnrealEd" });
		// add this line. Enables us to include header files in blueprintlibrary class
		// something like this #include "WheeledVehicleObject.h" 
		PrivateDependencyModuleNames.AddRange(new string[] { "BT_Plugin"  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
