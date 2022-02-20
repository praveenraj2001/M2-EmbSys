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

---

## Identifying features
 * It should show how much %of drapes should be opened according to room light intensity
 * It should dim light intensity according to room light intensity
 * It should change the speed of fan accordingly to the temperature of the room
 * When we are not at home it should be able to sense if door is closed or broken and should turn on a buzzer

## State of art
 * The main focus point here is the controlling the Home without even touching a single button
 * And also securing our home with a reliable __Burglar system__
 * Now this two features are combined and made into one product i.e. __A.B.C.L.A.D.S__
 * As the world PACE-FORWARD our technology needs to catch up to the world  

## 5W's & 1H
![5W1H](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/5W1H.png)

## S.W.O.T analysis 
### This below images represents the S.W.O.T analysis that I've done
![SWOT](https://github.com/praveenraj2001/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/SWOT.png)

---
## Requirements

<!-- Tables -->
### High Level Requirements

| ID | High Level Requirements |
| -------- | -------------- |
| H1 | It should controll Lights, Fan Automatically |
| H2 | It should controll Drapes Automatically |
| H3 | It should Sound buzzer when door is open and people are not at home |
| H4 | It should display How much %of drapes are opend |

### Low Level Requirements

| ID | Low Level Requirements for H1|       |ID | Low Level Requirements for H2|
| -------- | -------------- | ---- |-------- | -------------- |
| H1L1 | According to the values of __LDR__ control the lights|       |H2L1 |  According to the values of __LDR__ control the Drapes position |
| H1L2 | According to the values of __Termistor__ controll speed of fan|       |H2L2 | Position of drapes are controlled by SERVO Moto |



| ID | Low Level Requirements for H3|  |ID | Low Level Requirements for H4|
| -------- | -------------- | ---- | -------- | -------------- |
| H3L1 | The __555 Timer__ circuit should send pwm signal to speaker (When enabled, off other tasks)  |  | H4L1 | It should ba able display the %of drapes opend according to value of LDR |
| H3L2 | The micro controller should activate buzzer circuit and turn off other systems |  | H4L2 |It should be able to convert integer to string for displaying %of drapes |

---


# Test plan and output

#### Test plan is created and verified on both manual and automated manner

## HIGH LEVEL TEST PLAN / Integrated test plan

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Thermistor | Room Temperature  | Temperature(to volts) |  ✓ |
| 02 | LDR | Room light intensity | Intensity(to volts) |  To be done |
| 03 | Master Switch | on(Alarm) | Should disable all automation | To be done |
| 04 | Master Switch | off(Automation) | Should disable Alarm | To be done |
| 05 | 555 Timer and buzzer | Data from Micro controller | Buzzing Sound | ✓ |


| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Door Open/Close sensor | 5v 0r 0v  | 5v or 0v |  To be done |
| 02 | LCD display | Data from MCFS | Display %of drapes open and %of intensity of light |  ✓ |
| 03 | Servo motor | Data from MCFF | Should change position of drapes | To be done |
| 04 | Motor Control For Servo (MCFS) | Data from Micro controller | Send data to Servo | To be done |
| 05 | Motor Control For Fan (MCFF) | Data from Micro controller | Send data to MCFF | To be done |


#### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here

## LOW LEVEL TEST PLAN / Unit test plan

| Test ID (for LCD)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for LCD_Char() | N  | N |  N | ✓ |
| 02 | Check for LCD_String() | automation | automation |  automation | ✓ |
| 03 | Check for LCD_String() | Home | Home | Home | ✓ |


| Test ID (for ADC)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for ADC_Read() | To be done | To be done |  To be done | To be done |
| 02 | Check for ADC_Read() | To be done | To be done |  To be done | To be done |

