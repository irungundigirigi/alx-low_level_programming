#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	int j = i + 1;

	while (i < 9)
	{	
		putchar('0' + i);

		while(j < 9)
		{
			putchar('0' + j);
			j++;
		}
		i++;	
	}	
	putchar('\n');

	return (0);
}
