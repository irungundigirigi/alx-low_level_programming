#include "main.h"

/*
 *print_square - function name
 *Description: prints a square, followed by a new line. */

void print_square(int size)
{
	while (size > 1)
	{
		for (int j = 0; j <= size; j++)
			_putchar('#');

		_putchar('\n');

		size--;
		
	}
	if (size <= 0)
		_putchar('\n');
}

