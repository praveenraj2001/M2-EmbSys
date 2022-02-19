
# Test plan and output

#### Test plan is created and verified on both manual and automated manner

## HIGH LEVEL TEST PLAN / Integrated test plan

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Thermistor | Room Temperature  | Temperature(to volts) |  ✓ |
| 02 | LDR | Room light intensity | Intensity(to volts) |  ✓ |
| 03 | Master Switch | on(Alarm) | Should disable all automation | ✓ |
| 04 | Master Switch | off(Automation) | Should disable Alarm | ✓ |


| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | MEAN,MEDIAN,MODE | ARRAY , N  | outputs from Mean,median,mode|  ✓ |
| 02 | ELLIPSE,TRAPEZOID | 1 or 2 for selecting | outputs from Ellipse,Trapezoid |  ✓ |
| 03 | SPHERE,CONE,CYLINDER | 1 or 2 or 3 for selecting | outputs from sphere,cone,cylinder | ✓ |
| 04 | (a+b)^3,(a-b)^3,(a+b)^4,(a+b)^5 | a , b | ALGEBRA values | ✓ |
| 05 | If selected wrong option | 5 | Exits(prints wrong option entered) | ✓ |


#### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here

## LOW LEVEL TEST PLAN / Unit test plan

| Test ID (for statistics)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check mean | values = {1,1,1,2,3,4,5}, no.of values =7  | 2.428571 |  2.428571 |
| 02 | Check median | values = {1,1,1,2,3,4,5}, no.of values =7 | 2.900000 |  2.900000 |
| 03 | Check mode | values = {1,1,1,2,3,4,5}, no.of values =7 | 1.000000 | 1.000000 |


| Test ID (for linear geometry and mensuration)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check ellipse | 23, 48 | 3468.318359 | 3468.318359 |
| 02 | Check trapezoid | 23, 48, 53 | 1881.500000 | 1881.500000 |
| 03 | Check sphere volume and area | 3.3 | 150.532547(vol) 136.847778(area)| 150.532547(vol) 136.847778(area) |
| 04 | Check cone volume and area | 3.3,8.3 | 94.653046(vol) 92.599968(area)| 94.653046(vol) 92.599968(area) |
| 05 | Check cylinder volume and area | 3.3,8.3 | 283.959137(vol) 240.520340(area)| 283.959137(vol) 240.520340(area) |

| Test ID (for algebra)| Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check (a+b)^3 | a=23457 , b= 1234  | 15052756221952.000000 |  15052756221952.000000 |
| 02 | Check (a-b)^3 | a=23 , b= 48 | -15625.000000 |  -15625.000000 |
| 03 | Check (a+b)^4 |  a=23 , b= 48  | 25411680.000000 | 25411680.000000 |
| 04 | Check (a+b)^5 |  a=23 , b= 48  | 1804229376.000000 | 1804229376.000000 |

### Best Practices
  *  [x] Checked multiple range of inputs
  *  [x] Compared the data obtained with calculator
  *  [x] reasoned with the values because we have high precision than the calculator itself