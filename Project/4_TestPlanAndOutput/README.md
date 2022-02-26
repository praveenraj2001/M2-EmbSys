
# Test plan and output

### Test plan is created and verified on both manual and automated manner

## HIGH LEVEL TEST PLAN / Integrated test plan

| Test ID | Description | Input | Expected output | Actual Output | Passed or not |
| --- | --- | --- | --- | --- | --- |
| 01 | Temperature | 25°C(User) 30°C(room/Thermistor)  | Fan speed shall change accordingly | Fan speed shall change accordingly  | To be done |
| 02 | Light Intensity | 200Lux(User) 10Lux(LDR) | 100% of drapes opened | 100% of drapes opened |  To be done |
| 03 | Master Switch | on(1) | Shall disable all automation(0) | Shall disable all automation(0) |To be done |
| 04 | Master Switch | off(0) | Shall disable Alarm(0) and on Automation(1) | Shall disable Alarm(0) and on Automation(1) | To be done |
| 05 | 555 Timer and buzzer | Data from Micro controller(1) | Buzzing Sound | Buzzing Sound | To be done |


| Test ID | Description | Input | Expected output | Actual Output | Passed or not |
| --- | --- | --- | --- | --- | --- |
| 01 | Door Open/Close sensor | 5v 0r 0v  | shall Send 1 to Buzzer circuit | shall Send 1 to Buzzer circuit | To be done |
| 02 | LCD display | %(50) of drapes opened and %(50) of lights intensity | "%(50) of drapes opened and %(50) of lights intensity" on screen | "%(50) of drapes opened and %(50) of lights intensity" on screen | To be done |
| 03 | Motor Control For Stepper (MCFS) | Data from Micro controller( shall sends values from PORTD to Motor driver) |Data from Micro controller(shall sends values from PORTD to Motor driver) | Data from Micro controller(shall sends values from PORTD to Motor driver) | To be done |
| 04 | Motor Control For Fan (MCFF) | Data from Micro controller(PWM from Controller to Motor Driver) | shall Change speed of fan (PWM) |shall Change speed of fan (PWM) | To be done |
| 05 | Stepper motor | Data from MCFS To Stepper | shall change position of Stepper Motor | shall change position of Stepper Motor | To be done |



### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here

## LOW LEVEL TEST PLAN / Unit test plan

| Test ID (for LCD)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for LCD_Char() | N  | N |  N | To be done |
| 02 | Check for LCD_String() | automation | automation |  automation | To be done |
| 03 | Check for LCD_String() | Home | Home | Home | To be done |


| Test ID (for ADC)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for ADC_Read() | To be done | To be done |  To be done | To be done |
| 02 | Check for ADC_Read() | To be done | To be done |  To be done | To be done |


| Test ID (for mapping, map)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for map() | To be done | To be done |  To be done | To be done |
| 02 | Check for map() | To be done | To be done |  To be done | To be done |
| 03 | Check for map() | To be done | To be done |  To be done | To be done |
