#include "main.h"

/**
 * mul - prints 10 times the numbers, from 0 to 14, followed by a new line
 * Return: return the a * b
 */


void more_numbers(void)
{
	for (i = 0; i <= 14; i++)
	{	
		if (i < 10)
		{	
			break;
		}
		else
			_putchar(i / 10);

		_putchar(i % 10);

		_putchar('\n');

	}	
}
