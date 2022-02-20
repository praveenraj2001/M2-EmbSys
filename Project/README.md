# __Automatic Burglar alert, Cooling, Lighting and Drapes Control system__, _(A.B.C.L.A.D.S)_
---
# Description
 * This Project is an __Automatic Burglar alert, Cooling, Lighting and Drapes Control system__, _(A.B.C.L.A.D.S)_ which will be usefull for automatic light controlling in home and when we are not in home we can activate Buglar alarm which will give a sound noise alerting people around the home by buzzing noise when someone brakes the Door

# Block Diagram

![A.B.C.L.A.D.S](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/BlockDiagram.png)

## Temperature Sensor (Thermistor)
* This Thermistor is a resistor whose resistance is dependent on temperature here this change in resistence produces change in voltage, this voltage is taken as input to micro controller

## Light Intensity Sensor (LDR)
* This LDR(Light Dependent Resistor) is a resistor whose resistance is dependent on intensity of light here this change in resistence produces change in voltage, this voltage is taken as input to micro controller

## Motor Driver Unit
* This unit is different for both Drapes(we use Stepper motor driver i.e. ULN2804) and fan (we use motor driver L293183)

## FAN
* This is a fan which control the cooling of room by increasing/decreasing it's speed

## Actuator for drapes(Stepper motor)
* This is a motor who's direction and angle can be controlled which will inturn controls the DRAPES

## Light 
* The lighting inside the room is controlled by  this lights

## Display 
* Here we have used (Hd44780-26) LCD display for displaying how much %of drapes are opened and how much %of lights are dim

## Relay
* Here we have used Relay to switch on and off the Burglar alarm system

## Door Open/Closed Sensor
* This is actually a micro switch in real world which will send data to micro controller about the door (opened/closed) in our simulation we just used a normal switch

## Burglar alarm
* This system consists of __555 Timer__, some capacitors, resistors and a speaker connected in a specific way to make a buzzing sound

## Master Switch
* This switch controls the Burglar alarm and other automations as unit when this switch is on (we ON it when we want alarm)

## EEPROM
* Here this is actually inside the microcontroller

## Clock
* Here we are using internal clock of our micro controller

## Micro Controller 
* This is the brain of the system here we use Atmega328 every computation is done inside this controller it converts analog to digital and maps certain values, it controls LCD display, it sends PWM signals to Fan and Stepper motor