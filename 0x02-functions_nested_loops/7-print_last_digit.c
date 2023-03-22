#include "main.h"

/**
  * print_sign - Function name
  * Description: Prints the sign of a number.
  * @n: parameter passed to the function for checking.
  * Return: value of last digit
  */
int print_last_digit(int n)

	int last_digit;
{
	last_digit = n % 10;
	return(last_digit);
}

