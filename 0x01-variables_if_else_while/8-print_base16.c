#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase, followed by a new line. *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	/**
	 * To print a digit with putchar convert digital to ASCII value
	 * by using ASCII value of 0
	 */

	for (i = 'a'; i < 'g'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

