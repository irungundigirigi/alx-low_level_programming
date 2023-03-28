#include "main.h"

/**
 * puts2 - print every other char of a string
 * @str: char array string type
 * Description: loop over the string while printing on the char at even indexes
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
