#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: Always success 0
 */


int main(void)
{
	int n;
	int mod_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod_n = n % 10;
	
	if (mod_n > 5)

		printf("Last digital of %d is %d and is greater than 5\n", n, mod_n);

	else if ((mod_n < 6) && (mod_n != 0))

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod_n);
	else

		printf("Last digit of %d is %d and is 0\n", n, mod_n);

	return (0);
}

