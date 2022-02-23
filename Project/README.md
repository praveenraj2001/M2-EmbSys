# __Automatic Burglar alert, Cooling, Lighting and Drapes Control system__, _(A.B.C.L.A.D.S)_
---
# Table of content
1. About the A.B.C.L.A.D.S
    1. Description
    1. Identifying features
    1. State of art
    1. 5W's & 1H and S.W.O.T analysis
1. Requirements
    1. High level requirements
    1. Low level requirements
1. Block Diagram and Blocks explination
1. Test plan
    1. High level test plan
    1. Low level test plan
1. Application
1. Current Progress
---
## 1.1 Description
 * This Project is an __Automatic Burglar alert, Cooling, Lighting and Drapes Control system__, _(A.B.C.L.A.D.S)_ which will be usefull for automatic lighting and cooling control system in home and when we are not in home we can activate Buglar alarm which will give a buzz noise alerting people around the home by buzzing noise when someone breaks the Door

---

## 1.2 Identifying features
 * It should show how much %of drapes should be opened according to room light intensity
 * It should dim light intensity according to room light intensity
 * It should change the speed of fan accordingly to the temperature of the room
 * When we are not at home it should be able to sense if door is closed or broken and should turn on a buzzer

## 1.3 State of art
 * The main focus point here is the controlling the Home without even touching a single button
 * And also securing our home with a reliable __Burglar system__
 * Now this two features are combined and made into one product i.e. __A.B.C.L.A.D.S__
 * As the world PACE-FORWARD our technology needs to catch up to the world  

---
## 1.4 5W's & 1H and S.W.O.T analysis is in the below table 

| 5W's & 1H | S.W.O.T analysis  |
| -------- | -------------- |
| ![5W1H](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/5W1H.png) | ![SWOT](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/SWOT.png)|
# Block Diagram

![A.B.C.L.A.D.S](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/BlockDiagram.png)

---

## Requirements

<!-- Tables -->
### High Level Requirements

| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | It should controll Lights, Fan Automatically |
| HLR2 | It should controll Drapes Automatically |
| HLR3 | It should Sound buzzer when door is open and people are not at home |
| HLR4 | It should display How much %of drapes are opend |


### Low Level Requirements

| ID | Low Level Requirements for H1|       |ID | Low Level Requirements for H2|
| ----- | ----- | ---- |----- | ----- |
| LLR1.1 | According to the values of __LDR__ control the lights|       |LLR2.1 |  According to the values of __LDR__ control the Drapes position |
| LLR1.2 | According to the values of __Termistor__ controll speed of fan|       |LLR2.2 | Position of drapes are controlled by SERVO Moto |



| ID | Low Level Requirements for H3|  |ID | Low Level Requirements for H4|
| -------- | -------------- | ---- | -------- | -------------- |
| LLR3.1 | The __555 Timer__ circuit should send pwm signal to speaker (When enabled, off other tasks)  |  | LLR4.1 | It should ba able display the %of drapes opend according to value of LDR |
| LLR3.2 | The micro controller should activate buzzer circuit and turn off other systems |  | LLR4.2 |It should be able to convert integer to string for displaying %of drapes |

---
##
## SENSORS
* ### Temperature Sensor (Thermistor)
    * This Thermistor is a resistor whose resistance is dependent on temperature here this change in resistence produces change in voltage, this voltage is taken as input to micro controller

* ### Light Intensity Sensor (LDR)
    * This LDR(Light Dependent Resistor) is a resistor whose resistance is dependent on intensity of light here this change in resistence produces change in voltage, this voltage is taken as input to micro controller


* ### Door Open/Closed Sensor
    * This is actually a micro switch in real world which will send data to micro controller about the door (opened/closed) in our simulation we just used a normal switch

* ## Master Switch
    * This switch controls the Burglar alarm and other automations as unit when this switch is on (we ON it when we want alarm)


## ACTUATORS
* ### FAN
    * This is a fan which control the cooling of room by increasing/decreasing it's speed

* ### Actuator for drapes(Stepper motor)
    * This is a motor who's direction and angle can be controlled which will inturn controls the DRAPES

* ### Relay
    * Here we have used Relay to switch on and off the Burglar alarm system

* ### Light 
    * The lighting inside the room is controlled by  this lights

* ### Display 
    * Here we have used (Hd44780-26) LCD display for displaying how much %of drapes are opened and how much %of lights are dim


## Motor Driver Unit
* This unit is different for both Drapes(we use Stepper motor driver i.e. ULN2804) and fan (we use motor driver L293183)

## SUBSYSTEM

* ### Burglar alarm
    * This system consists of __555 Timer__, some capacitors, resistors and a speaker connected in a specific way to make a buzzing sound

## Micro Controller
* ### EEPROM
    * Here this is actually inside the microcontroller

* ### Clock
    * Here we are using internal clock of our micro controller

* ### Micro Controller 
    * This is the brain of the system here we use Atmega328 every computation is done inside this controller it converts analog to digital and maps certain values, it controls LCD display, it sends PWM signals to Fan and Stepper motor



---



# Test plan and output

#### Test plan is created and verified on both manual and automated manner

## HIGH LEVEL TEST PLAN / Integrated test plan

| Test ID | Description | Input | Expected output | Actual Output | Passed or not |
| --- | --- | --- | --- | --- | --- |
| 01 | Thermistor | 25  | Fan speed shall change accordingly | Fan speed shall change accordingly  | To be done |
| 02 | LDR | 10lux | 100% of drapes opened | 100% of drapes opened |  To be done |
| 03 | Master Switch | on(1) | Shall disable all automation(0) | Shall disable all automation(0) |To be done |
| 04 | Master Switch | off(0) | Shall disable Alarm(0) and on Automation(1) | Shall disable Alarm(0) and on Automation(1) | To be done |
| 05 | 555 Timer and buzzer | Data from Micro controller(1) | Buzzing Sound | Buzzing Sound | To be done |


| Test ID | Description | Input | Expected output | Actual Output | Passed or not |
| --- | --- | --- | --- | --- | --- |
| 01 | Door Open/Close sensor | 5v 0r 0v  | Send 1 to Buzzer circuit | Send 1 to Buzzer circuit | To be done |
| 02 | LCD display | %(50) of drapes opened and %(50) of lights intensity | "%(50) of drapes opened and %(50) of lights intensity" on screen | "%(50) of drapes opened and %(50) of lights intensity" on screen | To be done |
| 03 | Motor Control For Stepper (MCFS) | Data from Micro controller(sends values from PORTD to Motor driver) |Data from Micro controller(sends values from PORTD to Motor driver) | Data from Micro controller(sends values from PORTD to Motor driver) | To be done |
| 04 | Motor Control For Fan (MCFF) | Data from Micro controller(PWM from Controller to Motor Driver) | Change speed of fan (PWM) | Change speed of fan (PWM) | To be done |
| 05 | Stepper motor | Data from MCFS To Stepper | Should change position of Stepper Motor | Should change position of Stepper Motor | To be done |



#### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here

## LOW LEVEL TEST PLAN / Unit test plan

| Test ID (for LCD)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for LCD_Char() | N  | N |  N | ✓(manual) |
| 02 | Check for LCD_String() | automation | automation |  automation | ✓(manual) |
| 03 | Check for LCD_String() | Home | Home | Home | ✓(manual) |


| Test ID (for ADC)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for ADC_Read() | To be done | To be done |  To be done | To be done |
| 02 | Check for ADC_Read() | To be done | To be done |  To be done | To be done |


# Applications
* The scope of this project is vast in the area of home automation and Home security and when people want automatic home lighting and cooling system along with  Intruder alart


------
<!-- 
# Current Progress
![CKT](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Current_progress.png)
Done with Buzzer and screen and adc conversion -->