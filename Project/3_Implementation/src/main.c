
/*  
   LCD16x2 4 bit ATmega16 interface
   http://www.electronicwings.com
*/



#include "../header/project.h"
 
int main()
{

    char String[5];
	int value=0;
	int fwd=0;
	int prev_val;
	int rev=0;
	int temp;
	
	DDRD |= 0b00001111;  /*insted of "DDRD |= 0x0f;" */
	DDRC |= 0b1000000;
	LCD_Init();
	
	if(PIND & (1<<4)){  // moniter bit 4 of portd for buzzer 

			while(1){ // moniter bit 5 of portc for Door sensor
				 if(PINC & (1<<5)){
				 PORTC |=(1<<PIN6); 	
					 LCD_String_xy(0,0," Burglar Alarm ");
					 LCD_String_xy(1,0," S.O.S    ");
					 LCD_Command(0xd4);
					 LCD_String(" A.B.C.L.A.D.S");
				 }
				 else{
					 PORTC &= ~(1<<PIN6); 	
					 LCD_String_xy(0,0," Burglar Alarm ");
					 LCD_String_xy(1,0," Secured ");
					 LCD_Command(0xd4);
					 LCD_String(" A.B.C.L.A.D.S");
				 }
				 }

	}

	else{
		ADC_Init(); 
		LCD_Init();			/* Initialization of LCD */
		LCD_Clear(); /* Clear the Display */
		LCD_Command(0xd4);
		LCD_String(" A.B.C.L.A.D.S");

		ADC_Init();
		int user_int=ADC_Read(0);
		ADC_Init();
		int room_int=ADC_Read(1);
		value = room_int - user_int;
		prev_val = value;

	 stepper_and_temp(&prev_val, &value, &fwd, &rev, String, &room_int, &user_int, &temp); /* for stepper motor */
	
	}
	
	}