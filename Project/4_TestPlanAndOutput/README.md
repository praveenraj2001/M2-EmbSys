
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

