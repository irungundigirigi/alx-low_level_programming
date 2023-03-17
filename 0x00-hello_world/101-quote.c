#include <stdio.h>

/**
 * main: Entry point
 *
 * Description: Prints string to standard error
 * Return: 1 - Any non-zero value shows error
 */

int main(void)
{

	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", quote);
	return (1);
}
