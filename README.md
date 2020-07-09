# Calculator Plugin: Development and How To Use
Richa Bavadekar

This calculator was made as an Editor Utility Widget in Unreal Engine 4.22.3. It's UI and functionality was implemented using Widget Blueprints.

## How It Works
PICTURE HERE
Pictured above is the UI for the calculator. It is comprised of three textboxes, one dropdown menu, and one button. The first two textboxes take user input in the form of integers. The dropdown menu (called a ComboBox in UE4) is in between these two text boxes and allows the user to chose one of four mathematical operations to perform on the two numbers. Next, there is a button with an equal sign. When clicked, the answer is displayed on the third text box. 

## Development
The UI for the calculator was created in the 'Designer' section of Widget Blueprints. The functionality was implemented in the 'Graph' section using built-in drag-and-drop functions. To make the blueprints less cluttered, four new functions were also made for each of the four mathematical operations: add, subtract, multiply, and divide. The logic for each of the new functions was:
* Get the user inputted text from both of the textboxes
* Convert the text to integers
* Perform the specific operation on the two integers
* Convert the result back in to text; display in last textbox
Pictured below is one of the four functions:
PICTURE HERE
Next, comes the Event Graph, which contains the main workflow of the calculator. In the event graph, the four functions are connected to the dropdown menu by the 'Switch on String' built-in function, which is called when the equal button is clicked. Pictured below is the blueprint of the event graph:
PICTURE HERE

## Plugin 



