#include "main.h"

/**
 * mul - prints 10 times the numbers, from 0 to 14, followed by a new line
 * Return: return the a * b
 */


void more_numbers(void)
{
	for(i = 0; i <= 14; i++)
	{	
		if (i < 10)
		{	
			break;
		}
		else
			putchar(i / 10);

		putchar(i % 10);

		putchar('\n');

	}	
}