#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: string to be duplicated
 * Return: pointer to duplicated string.
 */

char *_strdup(char *str)
{
	char *dup;
	int i, c;

	if (str == NULL)
		return (NULL);
	
	/* find length of str, held in int i */
	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);

	/* validate memory */
	if (a == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		dup[j] = str[j];

	dup[c] = '\0';

}
