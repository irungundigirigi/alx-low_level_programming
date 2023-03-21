#include "main.h"

/**
 * print_alphabet
 *
 * Description: print all the alphabets lowercase followed by new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
