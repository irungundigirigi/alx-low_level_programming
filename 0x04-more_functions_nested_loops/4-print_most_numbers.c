#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 * Description: the function loops through the numbers 0-9 and prints
 * the numbers that meet the condition defined.
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar('0' + num);
		else
			break;
	}
	_putchar('\n');
}
