
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
