#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print varying number of arguments
 * @separator: separator
 * @n: arguments number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(arg, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
