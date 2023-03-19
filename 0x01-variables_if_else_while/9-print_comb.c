#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 10; i++)
		putchar(i);
		putchar(',');
		putchar(' ');

	return (0);
}
