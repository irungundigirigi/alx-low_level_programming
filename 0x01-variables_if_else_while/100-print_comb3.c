#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	int j;

	while (i < 9)
	{	
		putchar('0' + i);

		for(j = i + 1; i < 9; i++)
		{
			putchar('0' + j);
		}
		i++;	
	}	
	putchar('\n');

	return (0);
}
