#include "main.h"

/**
 * more_numbers - function name
 * Description: prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: return the a * b
 */


void more_numbers(void)
{
	int i;

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
