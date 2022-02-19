# Description
 * This Project is an __Automatic Burglar alert, Cooling, Lighting and Drapes Control system__, _(A.B.C.L.D.S)_ which will be usefull for automatic light controlling in home and when we are not in home we can activate Buglar alarm which will give a sound noise alerting people around the home by buzzing noise when someone brakes the Door

## Identifying features
 * It should show how much %of drapes should be opened according to room light intensity
 * It should dim light intensity according to room light intensity
 * It should change the speed of fan accordingly to the temperature of the room
 * When we are not at home it should be able to sense if door is closed or broken and should turn on a buzzer

## State of art
 * The main focus point here is the controlling the Home without even touching a single button
 * And also securing our home with a reliable __Burglar system__
 * Now this two features are combined and made into one product i.e. __A.B.C.L.D.S__
 * As the world PACE-FORWARD our technology needs to catch up to the world  

## 4W's & 1H
### WHO
* People who want a little home automation and security to their home
### WHAT
* Automatic Burglar alert, Cooling, Lighting and Drapes Control system 
### WHEN
* When we are going out of town and want to secure our home
* In Day when we want automatic drape control
## Where
* Inside a house
## HOW
* switch on master to home for burglar alarm
* switch on master to automatic for control lighting and coolness inside home
 


## S.W.O.T analysis 
### This below images represents the S.W.O.T analysis that I've done
![SWOT](https://github.com/praveenraj2001/M1_ProjectGoal_Util/blob/main/1_Requirements/SWOT-Analysis-Template.jpg)

## Requirements

<!-- Tables -->
### High Level Requirements
---
| ID | High Level Requirements |
| -------- | -------------- |
| HL1 | It should controll Lights, Fan Automatically |
| HL2 | It should controll Drapes Automatically |
| HL3 | It should Sound buzzer when door is open and people are not at home |
| HL4 | It should display How much %of drapes are opend |

### Low Level Requirements
---
| ID | Low Level Requirements for HL1|       |ID | Low Level Requirements for HL2|
| -------- | -------------- | ---- |-------- | -------------- |
| H1L1 | According to the values of __LDR__ control the lights|       |H2L1 |  According to the values of __LDR__ control the Drapes position |
| H1L2 | According to the values of __Termistor__ controll speed of fan|       |H2L2 | Position of drapes are controlled by SERVO Moto |



| ID | Low Level Requirements for HL3|  |ID | Low Level Requirements for HL4|
| -------- | -------------- | ---- | -------- | -------------- |
| H3L1 | The __555 Timer__ circuit should send pwm signal to speaker  |  | H4L1 | It should ba able display the %of drapes opend according to value of LDR |
| H3L2 | The micro controller should activate buzzer circuit and turn off other systems |  | H4L2 |It should be able to convert integer to string for displaying %of drapes |

## Best Method Followed
 * Instead of making multiple loops for sorting here we have used qsort which is the best method to follow and it gives best results

