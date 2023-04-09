#include "main.h"
#define NULL 0

/**
 * _strpbrk - search string for any set set of bytes.
 * @s: search in this string
 * @accept: search for bytes from here
 * Return: pointer to first occurence that matches one of the bytes.
 * @return:Ends all loops
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}

		i++;
	}

	return (NULL);
}
