/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: Mariam
 */
#include"std_types.h"
#include"Bit_calc.h"
//#include<util/delay.h>
#include"DIO_interface.h"
#include"DIO_regs.h"

void main (void)
{u8 Local_u8Iteration;
	while(1)
	{/*Set port as output*/
		DIO_vidSetPortDirection(PORTA,OUTPUT);
	for(Local_u8Iteration=0;Local_u8Iteration<8;Local_u8Iteration++)
	{
		DIO_vidSetPortValue(PORTA,(1<<Local_u8Iteration));
		//_delay_ms(500);
        for(int i=0; i<50000; i++);

	}
	for(Local_u8Iteration=0;Local_u8Iteration<8;Local_u8Iteration++)
		{
			DIO_vidSetPortValue(PORTA,(128>>Local_u8Iteration));
			//_delay_ms(500);
            for(int i=0; i<50000; i++);

		}
	}
}
