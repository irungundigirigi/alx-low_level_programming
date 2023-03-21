#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	for (i = 0; i < 9; i++)
	{	for(j = i + 1; j < 9; j++ )
			putchar('0' + i);
			putchar('0' + j);
	}	
	putchar('\n');

	return (0);
}
