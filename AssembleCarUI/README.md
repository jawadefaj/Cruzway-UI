# Assemble Car UI: Development and How To Use
Richa Bavadekar

This UI was made as an Editor Utility Widget in Unreal Engine 4.22.3. It's UI and functionality was implemented using Widget Blueprints.

## How It Works
![calcui](https://github.com/jawadefaj/Cruzway-UI/blob/richa/images/AssembleCarUI.jpeg)

Pictured above is the UI for Assemble Car. 
The UI widget ("SimulationUI") is located in the Contents folder ("Contents->SimulationUI.uasset"). To run the widget, first open the project in Unreal. You will see "SimulationUI" editor utility widget in the Content browser. Simply right click on it and select 'Run Editor Utility widget'

This UI will help the user to assemble the Vehicle Blueprint for their car. The user will select the Skeletal Mesh, Animation Blueprint, Physics Asset, Wheel Blueprint for the fouer wheels and Bone Names for the four wheels. When user clicks on 'Assemble Car' it will create a Vehicle Blueprint for the type of car they selected.

## Development
The UI for the calculator was created in the 'Designer' section of Widget Blueprints. The functionality was implemented in the 'Graph' section using built-in drag-and-drop functions. "Get Assets by Path" function was used to get all the assets like Skeletal Mesh, Animation Blueprint, Physcis Assets etc. 

Pictured below is the blueprint for one of the assets:
![addfunction](https://github.com/jawadefaj/Cruzway-UI/blob/richa/images/Blueprint_Assets.jpeg)

Next, comes the Event Graph, which contains the main workflow of the Assemble Car UI. 

Pictured below is the blueprint of the event graph:
![eventgraph](https://github.com/jawadefaj/Cruzway-UI/blob/richa/images/EventGraphAC.jpeg)

## Plugin
Plugins are useful as they allow specific tasks to be done on other devices or projects without re-implementing functionality. By making the Assemble Car UI a plugin, other users will be able to use the UI on their own devices. The plugin can be project-level or engine-level, and it must be packaged and enabled before use. 
