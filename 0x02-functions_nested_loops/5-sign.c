#include "main.h"

/**
  * print_sign(int n) - Prints the sign of a number
  * int n: parameter passed to function
  *
  * Return: 1 if n is greater than zero / 0 if zero / -1 if less than 0
  */
int print_sign (int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if ( n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}	
}

