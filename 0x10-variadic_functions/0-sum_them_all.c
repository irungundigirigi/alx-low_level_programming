#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return of variable no arguments
 * @n: integers 
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(vl, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vl, int);
	va_end(vl);

	return (sum);

}	
