// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

//for plugin
/*
#include "BT_Plugin.h"

#define LOCTEXT_NAMESPACE "FBT_PluginModule"

void FBT_PluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FBT_PluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBT_PluginModule, BT_Plugin)
*/

// Use for game module

#include "BT_Plugin.h"
IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, BT_Plugin, "BT_Plugin");