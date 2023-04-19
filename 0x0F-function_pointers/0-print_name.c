#include <stdlib.h>

/**
 * print_name - execute the function passed as argument
 * @name: char string
 * @f: fn pointer, takes string argument
 */

void print_name(char *name, void (*f)(char))
{
	if (name != NULL && f != NULL)
	f(name);
}
