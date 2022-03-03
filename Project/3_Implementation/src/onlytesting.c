#include "../onlytesting/onlytesting.h"

float fan_led_percent_map(float percent){
	return (percent/252)*100; 
}

