#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: string to be appended
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Loop through dest to find its length */
	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}

	return (dest);
}
