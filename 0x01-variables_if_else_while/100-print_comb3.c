#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int j = i + 1;
	int i = 0;

	for (i = 0; i < 9; i++)
	{	
		while(j < 10)
		{	
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
			j++;
		}	
	}	
	putchar('\n');

	return (0);
}
