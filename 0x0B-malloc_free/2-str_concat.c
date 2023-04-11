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
	int k ,z , i, j;
	int t_size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/** find string lengths **/
	for (i = 0; *(s1 + i) != '\0'; i++)
		;

	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	t_size = i + j + 1;

	concat = malloc(sizeof(char) * t_size);

	if (concat == NULL)
		return (NULL);

	for (z = 0; k = 0; z < t_size; z++)
	{
		if (z < 1)
			concat[z] = s1[z]
		else
	}		concat[z] = s2[k++];

	return (concat);
}
