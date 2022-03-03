

/**
 * @file project.h
 * @author Nyalam praveenraj 
 * @brief 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef PROJECT_H_
#define PROJECT_H_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#define F_CPU 8000000UL			/* Define CPU Frequency e.g. here 8MHz */
#include <avr/io.h>			/* Include AVR std. library file */
#include<math.h>
#include <util/delay.h>			/* Include Delay header file */
#include <stdlib.h>
#include <string.h>


#define LCD_Dir  DDRB			/* Define LCD data port direction */
#define LCD_Port PORTB			/* Define LCD data port */
#define RS PB0				/* Define Register Select pin */
#define EN PB1 				/* Define Enable signal pin */

void LCD_Command( unsigned char cmnd );
void LCD_Char( unsigned char data );
void LCD_Init (void);
void LCD_String (char *str);
void LCD_String_xy (char row, char pos, char *str);
void LCD_Clear();
void LCD_pos(char row, char pos);


void ADC_Init();
int ADC_Read(char channel);
int map(int x, int in_min_range, int in_max_range, int out_min_range, int out_max_range);

void stepper_rotate(int **prev_val,int **value,int **fwd, int **rev);

void timer_led(int pwm);
void timer_fan(int pwm);
void temp_fan(int **temp , char String[]);

void stepper_and_temp(int *prev_val,int *value,int *fwd, int *rev, char String[], int *room_int, int *user_int, int *temp);



#endif
