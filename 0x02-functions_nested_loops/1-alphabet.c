#include "main.h"

/**
 * print_alphabet - function name
 *
 * Description: print all the alphabets lowercase followed by new line.
 *
 * Return: void/no return value
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
