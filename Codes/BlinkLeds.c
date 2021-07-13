/*
 * LedBlink_13july.c
 *
 * Created: 13-07-2021 05:33:50 PM
 * Author : Kishankrs
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRA = 0XFF; //port A as output
	
    /* Replace with your application code */
    while (1) 
    {
	PORTA = 0X55; //10101010
	_delay_ms(1000);
	PORTA = 0XAA; //01010101
	_delay_ms(1000);// 1sec delay
    }
}

