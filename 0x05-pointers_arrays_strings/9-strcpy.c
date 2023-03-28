#include "main.h"

/* _strcpy - see Description
 * @dest: char type string
 * @src: char type string
 * Description: copy string pointed to by the pointer 'src' to the
 * buffer pointed to by 'dest'
 * Return: pointer to dest
 */


char *_strcpy(char *dest, char *srcy)
{
	for(i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
