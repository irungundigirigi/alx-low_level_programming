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
	int num = n;

	if (num >= _strlen(s2))
		num = _strlen(s2);

	if (num <= 0)
		return (0);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = (unsigned int)_strlen(s1);

	p = malloc((length1 + num + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(p + i) = s1[i];

	for (j = 0; j < num; j++)
		*(p + i + j) = s2[j];

	*(p + i + j) = '\0';

	return (p);

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
