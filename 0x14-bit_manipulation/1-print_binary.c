#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: int number
 * Return: binary representation of a number
 */

void print_binary(unsigned long int n)
{
	unsigned long int n_dup = n, m  = 1;
	int len = 0;

	while (n_dup > 0)
	{
		n_dup >>= 1;
		len++;
	}

	len -= 1;

	if (len > 0)
		m = m << len;

	while (m > 0)
	{
		if (n & m)
			_putchar('1');
		else
			_putchar('0');

		m >>= 1;
	}
}

