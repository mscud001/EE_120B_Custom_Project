/*
 * mscud001_Space_Invaders.c
 *
 * Created: 2/13/2018 1:15:06 PM
 *  Author: Matthew Scudder
 */ 

#include <avr/io.h>
#include "io.c"

unsigned long highScore;

void displayHighScoreAndCurrentScore()
{
	LCD_Cursor(1);
	LCD_WriteData('H');
	LCD_Cursor(2);
	LCD_WriteData('i');
	LCD_Cursor(3);
	LCD_WriteData('g');
	LCD_Cursor(4);
	LCD_WriteData('h');
	LCD_Cursor(5);
	LCD_WriteData(':');
	LCD_Cursor(17);
	LCD_WriteData('S');
	LCD_Cursor(18);
	LCD_WriteData('c');
	LCD_Cursor(19);
	LCD_WriteData('o');
	LCD_Cursor(20);
	LCD_WriteData('r');
	LCD_Cursor(21);
	LCD_WriteData('e');
	LCD_Cursor(22);
	LCD_WriteData(':');
}

int main(void)
{
	DDRA = 0x00; PORTA = 0xFF; // SNES input lines
	DDRB = 0xFF; PORTB = 0x00; // Arduino output lines
	DDRC = 0xFF; PORTC = 0x00; // LCD data lines
	DDRD = 0xFF; PORTD = 0x00; // LCD control lines
	
	LCD_init(); // Initializes the LCD display
	displayHighScoreAndCurrentScore(); 	// Starting at position 1 and 17 on the LCD screen, writes "High:" and "Score:" to screen.
	
	while(1) 
	{
		continue;
	}
}
