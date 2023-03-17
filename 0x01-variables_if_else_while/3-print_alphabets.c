#include <stdio.h>


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
		putChar(lowerCase_x);
		putChar('\n');

	return (0);
}
