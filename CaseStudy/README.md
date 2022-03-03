
#  About the A.B.C.L.A.D.S
## Description
 * This Project is an __Automatic Burglar alert, Cooling, Lighting and Drapes Control system__, _(A.B.C.L.A.D.S)_ which will be usefull for automatic lighting and cooling control system in home and when we are not in home we can activate Buglar alarm which will give a buzz noise alerting people around the home by buzzing noise when someone breaks the Door, When the user sets a required temperature and light intensity this system will automatically controls the Room temperature and Light intensity.

---

## Identifying features
 * It shall show how much %of drapes are opened according to room light intensity
 * It shall dim/increase light intensity according to room light intensity variation 
 * It shall change the speed of fan accordingly to the temperature of the room
 * When we are not at home it shall be able to sense if door is closed or broken and shall turn on a buzzer

## State of art
 * The main focus point here is the controlling the Home without even touching a single button
 * And also securing our home with a reliable __Burglar system__
 * Now this two features are combined and made into one product i.e. __A.B.C.L.A.D.S__
 * As the world PACE-FORWARD our technology needs to catch up to the world  

---
## 5W's & 1H and S.W.O.T analysis is in the below table 

| 5W's & 1H | S.W.O.T analysis  |
| -------- | -------------- |
| ![5W1H](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/5W1H.png) | ![SWOT](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/SWOT.png)|

---

## Requirements


### High Level Requirements

| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | It shall control Lights, Fan Automatically when user selects desired light intensity and Temperature |
| HLR2 | It shall control Drapes Automatically user selects desired light intensity |
| HLR3 | It shall Sound buzzer when door is open and people are not at home |
| HLR4 | It shall display How much %of drapes are opend |


### Low Level Requirements

| ID | Low Level Requirements for H1|       |ID | Low Level Requirements for H2|
| ----- | ----- | ---- |----- | ----- |
| LLR1.1 | According to the values of __LDR__ and __User Light Intensity__ shall control the Drapes position|     |LLR2.1 | According to the values of __LDR__ and __User Light Intensity__ shall control the lights  |
| LLR1.2 | According to the values of __Termistor__ and __User Temperature__ shall control speed of fan|     |LLR2.2 | Position of drapes shall be controlled by Stepper Motor |



| ID | Low Level Requirements for H3|  |ID | Low Level Requirements for H4|
| -------- | -------------- | ---- | -------- | -------------- |
| LLR3.1 | The __555 Timer__ circuit shall send pwm signal to speaker  |  | LLR4.1 | It shall be able display the %of drapes opend according to value of LDR |
| LLR3.2 | The micro controller shall activate buzzer circuit and turn off other systems |  | LLR4.2 |It shall be able to convert integer to string for displaying %of drapes |


#  Architecture
* ##  Behavioral Diagram
    * ###  High Level Flow chart Behavioral Diagram
    ![HLFBD](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/HLFBD_without_BG.png)
    * ### Low Level Flow chart Behavioral Diagram
    ![LLFBD](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/LLFBD_without_BG.png)
* ## Structural Diagram
    * ### High Level UML Use Case Structural Diagram
    ![HL_UML](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/HL_UML_withour_BG.png)
    * ### Low Level UML Use Case Structural Diagram
    ![LL_UML](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/LL_UML_without_BG.png)
---

  ## Best method followed
   * The best of the best Diagrams are considered
   * from this Diagrams code is made 
   * low level and high level both are implimented


# Applications
* The scope of this project is vast in the area of home automation
* Home security and when people want automatic home lighting and cooling system along with Intruder alart
* In factories and function halls
* In Schools and Collages to save energy

# Micro Oven
## The below block diagram has the major parts for the Micro Oven
 ![Micro oven Block Diagram](https://github.com/praveenraj2001/M2-EmbSys/blob/main/CaseStudy/Microwave_oven.png)
 

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
## Power management unit
* Here how much power should be given to a certain block is calculated and given to that block based on the usage sometimes controller can also choose the power supply
## Battery & Charging
* Here the charging of battery is taken care of with some special circuitry