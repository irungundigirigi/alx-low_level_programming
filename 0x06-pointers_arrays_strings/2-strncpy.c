#include "main.h"

/**
 *_strncpy - write a function that copies a string.
 *@dest: destination.
 *@src: string to be copied.
 *@n: no of bytes to be copied.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{	
		dest[j] = src[j];
	}

	while(j < n)
	{
		dest[j] = '\0';
	}	
	return (dest);
}

