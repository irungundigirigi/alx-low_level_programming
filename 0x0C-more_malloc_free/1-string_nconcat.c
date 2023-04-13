#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates string 1 with n bytes from string 2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 used
 * Return: NULL if fail, else pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int length1, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = (unsigned int)_strlen(s1);

	p = malloc((length1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		*(p + i) = s1[i];

	j = 0;

	while (i < (length1 + n)
		* (p + i) = s2[j];
		j++;
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
