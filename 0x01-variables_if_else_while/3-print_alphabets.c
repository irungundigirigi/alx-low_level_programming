#include <stdio.h>
#include <ctype.h>


/**
 * main: Entry point
 *
 * Description:prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: Always success 0
 */


int main(void)
{	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int lowerCase_x = tolower(x);

		putchar(lowerCase_x);
	
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');	
	return (0);
}
