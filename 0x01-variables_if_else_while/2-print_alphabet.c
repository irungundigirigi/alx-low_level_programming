#include <stdio.h>
#include <ctype.h>


/**
 * main: Entry point
 * Description:prints the alphabet in lowercase, followed by a new line.
 * Return: Always success
 */


int main(void)
{	
	for (int x = 'A'; x <= 'Z'; x++)
	{
		int lowerCase_x = tolower(x);
		putchar(lowerCase_x);
		putchar('\n');

	return (0);
}
