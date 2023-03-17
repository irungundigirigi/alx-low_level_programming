#include <stdio.h>
#include <ctype.h>


/**
 * main - Entry point
 *
 * Description:prints the alphabets in lowercase with exceptions q and e
 * Return: Always success 0
 */


int main(void)
{	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if ((x != 'q') && (x != 'e'))
		putchar(x);
	}
	putchar('\n');
	return (0);
}

