#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: copied to this memory.
 * @src: copied from this memory block.
 * @n: copy the values of n bytes.
 * Return: pointer to dest;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			*(dest + i) = *(src + i);
		}
	}

	return (dest);
}