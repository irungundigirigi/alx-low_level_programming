#include "main.h"

/**
 * set_string - set the value of pointer to char.
 * @s: pointer to a pointer.
 * @to: pointer to a char.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
