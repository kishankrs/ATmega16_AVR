/*
 * LED_chaser_4Aug21.c
 *
 * Created: 04-08-2021 12:28:43 PM
 * Author : Kishankrs
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
   DDRA = 0xFF; // port A as output
   
    while (1) 
    {
		PORTA = 0x01;
		_delay_ms(500);
		PORTA = 0x02;
		_delay_ms(500);
		PORTA = 0x04;
		_delay_ms(500);
		PORTA = 0x08;
		_delay_ms(500);
		PORTA = 0x10;
		_delay_ms(500);
		PORTA = 0x20;
		_delay_ms(500);
		PORTA = 0x40;
		_delay_ms(500);
		PORTA = 0x80;
		_delay_ms(500);
    }
}

