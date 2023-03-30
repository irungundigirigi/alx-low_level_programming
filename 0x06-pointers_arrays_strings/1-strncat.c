#include "main.h"

/**
 * _strncat - concatenates at most n bytes from src
 * @dest: destination string
 * @src: string to be appended
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Loop through dest to find its length */
	for (j = 0; dest[j] != '\0'; j++)
		;

	for (i = 0; (src[i] != '\0' && n > 0); i++, j++, n--)
	{
		dest[j] = src[i];
	}

	return (dest);
}
