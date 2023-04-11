#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - joins two strings together
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int k, z, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/** find string lengths **/
	for (i = 0; *(s1 + i) != '\0'; i++)
		;

	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	concat = malloc(sizeof(char) * (i + j) + 1);

	if (concat == NULL)
		return (NULL);

	k = 0;
	z = 0;

	while (k < i)
	{
		*(concat + k) = *(s1 + k);
		k++;
	}

	while (z < j)
	{
		*(concat + k) = *(s2 + z);
		k++, z++;
	}

	*(concat + k) = '\0';

	return (concat);
}
