#include <stdarg.h> 
#include <stdio.h> 
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(arg, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(arg, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(arg);
	}
	printf("\n");
}

