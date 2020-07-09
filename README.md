# Calculator-UI

## Design
The goal for me was to create a calculator with a simple and easy to use UI. The UI I developed is shown below.
![calc](https://github.com/jawadefaj/Cruzway-UI/blob/Prateek-Calc/Screenshot%20(1).png)

To develop this UI, I had to first make the buttons to use for the UI. For the two number inputs, I used two text boxes. In between them, there is a dropdown that can be clicked to choose between the four basic operands: addition, subtraction, multiplication, and division. Then, I inluded a button for the equals sign that can perform an action when clicked. Then, the final box where the answer appears is a text box.

## Blueprint Functionality
For the blueprints, there were two things that were needed to be accomplished. First, the four functions had to be defined in the blueprint. This was done by getting the input from the text boxes, converting them to integers, and use the built in blueprint functions which would return the answers to the answer box. After the functions were created, they were all brought together in the main event graph. In this blueprint, the function decided with the dropdown would be chosen from the four functions and then used.

## Plugin
The calculator plugin for this has been developed. With this plugin, the calculator widget can be imported into any project as a plugin and used.
