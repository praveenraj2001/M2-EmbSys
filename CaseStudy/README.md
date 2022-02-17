# Micro Oven
## The below block diagram has the major parts for the Micro Oven
 ![Micro oven Block Diagramcommit](https://github.com/praveenraj2001/M2-EmbSys/blob/main/CaseStudy/Microwave_oven.png)
 

## Now let’s explore each component
## LCD Display
*	This displays the timer value and the temperature of the oven and also which option is selected i.e. Baking /Cooking.
## Buttons
*	Buttons helps us to select the timer value and Mode of cooking 
## Sensor (Safety Lock)
*	This Safety lock sensor gives data to Micro Controller weather door is locked on not
## Actuator (Safety Lock)
*	This Actuator locks the door of Micro Oven when in use
## Motor Driver
*	This is used to drive the motor (Actuator)
## Actuator (Motor)
*	This motor will rotate to cook food evenly (Will be situated at base plate)
## Clock
*	This is used to synchronize the Micro controller and most of the times it is usually located inside Micro controller
## Sensor (Temperature)
*	This sensor gives temperature values to Micro controller
## EEPROM
*	This is a memory here in this EEPROM we will have Both Nand and Nor which will basically store Data and Program memory respectively
## Micro Controller
*	This is the brain of our system This will tell us when to lock when to unlock
and defines timer and sends control signals to high voltage control unit 
## Relays and High Voltage AC Control Unit 
*	This system consists of relays and Transformer which are controlled by the micro controller
## Magnetron and Heater
*	If user selects option for Baking Heater will get activated if user selects for Cooking Magnetron will get activated, which are best options for Baking and Cooking respectively.

# CAMERA
## The below block diagram has the major parts for the Camera
![Camera Block Diagram](https://github.com/praveenraj2001/M2-EmbSys/blob/main/CaseStudy/Camera.png)

## Micro controller 
* This is the brain of our system This will tell us how much power should be given to which block, it will process images and videos, sends data to hdmi and etc
## Actuator and lens Interface 
* This will capture the images and sends data to the controller
## Sensor (light intensity)
* This sensor will send data to the controller then controller decide weather to process image accordingly
## LCD Display 
* Here the data in the memory and also some controlls are displayed
## Speaker
* This is used when the video is playing 
## MIC
* MIC is used to capture the audio data and send it to the Controller
## USB & HDMI interface
* These interfaces are used when the data needs to be sent outside and displayed or copied
## External Memory
* The images and videos consume more space so external memory is used for expandable memory
## GPS, WLAN, BT
* GPS is used to access our  location details. WLAN is wireless computer network that links two or more devices using wireless communication to form a local area network. Bluetooth with this we can share the images on bluetooth
## Real Time Clock
* This real time clock is to provide precise time and date which can be used for this camera
## RAM & EEPROM
* Here we will require ram and rom for out system because we have larger data to store and larger data to process