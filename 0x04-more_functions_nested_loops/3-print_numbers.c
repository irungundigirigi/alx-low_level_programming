#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * void: takes no argument
 * Return: doesnt return any value
 */

void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
