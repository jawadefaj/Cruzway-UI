# Cruzway-UI
Summer Internship Project

1. In Main project (Vehicle.uproject), add
        "Plugins": [
                {
                        "Name": "BT_Plugin",
                        "Enabled": true
                }
        ]

2. In Vehicle.Build.cs
        // add UnrealEd - module for Kismet functions
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UnrealEd" });
        // add this line. Enables us to include header files in blueprintlibrary class
        // something like this #include "WheeledVehicleObject.h" 
        PrivateDependencyModuleNames.AddRange(new string[] { "BT_Plugin"  });

3. Remaining Work
- Make blueprint name as unique id (use FGUID)
- Add components to blueprint

4. Known Issues
- Generating blueprint second time will crash as the blueprint is currently hard coded

