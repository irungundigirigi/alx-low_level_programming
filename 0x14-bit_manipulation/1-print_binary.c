#include "main.h"

/**
 * print_binary - prints binary representation of no
 * @number: unsigned long int
 * Return: void
 */

void print_binary(unsigned long int number)
{
	if (number)
	{
		if (number >> 1)
			print_binary(number >> 1);
		_putchar((number & 1) + '0');
	}
	else
	{
		_putchar('0');
	}

}
