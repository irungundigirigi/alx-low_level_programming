#include "main.h"

/**
 * print_most_numbers - print no 0 to 9 followed except 2 and 4
 * Return: return the a * b
 */

void print_most_numbers(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
			_putchar(i + '0');
		else
			continue;
	}
}

