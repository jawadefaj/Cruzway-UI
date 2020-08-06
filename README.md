# Cruzway-UI
Summer Internship Project

This Branch is for the cpp code added for when assemble car is clicked in UI

1. Added CruzwayUtility.h and CruzwayUtility.cpp and made the following changes:

a. In Main project (Vehicle.uproject), add
        "Plugins": [
                {
                        "Name": "BT_Plugin",
                        "Enabled": true
                }
        ]

b. In Vehicle.Build.cs
        // add UnrealEd - module for Kismet functions
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UnrealEd" });
        // add this line. Enables us to include header files in blueprintlibrary class
        // something like this #include "WheeledVehicleObject.h" 
        PrivateDependencyModuleNames.AddRange(new string[] { "BT_Plugin"  });

2. Remaining Work
- Make Vehicle Blueprint name as unique id
- Add components (Skeletal Mesh, Animation Blueprint, Wheel Blueprint) to Vehicle Blueprint
- Add Event Graph to Vehicle Blueprint

3. Known Issues
- Generating blueprint second time will crash as the vehicle blueprint name is currently hard coded

