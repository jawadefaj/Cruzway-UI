# Cruzway-UI
Summer Internship Project

![carUI](https://github.com/jawadefaj/Cruzway-UI/blob/maggie-ui/caruiimage.png)


##Car Implementation
To have the user assemble a car, I created a new blueprint class from WheeledVehicle. In the CarUI Editor Utility Widget, I created a reference  to
MyWheeledVehicle that allows the selections on the UI to make changes to the car.

##To Do
The changes to the vehicle from the UI only save during runtime, so I'm trying to get the changes to save and load everytime. Right now I save the Skeletal Mesh selected
with a GameSaver object, then load it and set it to myWheeledVehicle when the event begins. The Skeletal Mesh is saved and loaded successfully, but 
it is not being set to the mesh of myWheeledVehicle successfully.
