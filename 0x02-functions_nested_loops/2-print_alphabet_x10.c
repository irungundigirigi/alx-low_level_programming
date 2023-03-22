#include "main.h"

/**
 * print_alphabet_x10 - function name
 *
 * Description: print all the alphabets lowercase followed by new line.
 *
 * Return: void/no return value
 */
void print_alphabet_x10(void)
{
	char i;
	int count = 1;

	while (count <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		count++;
	}

}

