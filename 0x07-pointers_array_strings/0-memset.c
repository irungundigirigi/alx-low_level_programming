#include "main.h"

/**
 * _memset - fills memory with constant byte.
 * @s: starting address of memory to be filled.
 * @b: value to be filled.
 * @n: Number of bytes to be filled.
 * Return: pointer to the memory area s;
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			*(s + i) = b;
		}
	}

	return (s);
}
