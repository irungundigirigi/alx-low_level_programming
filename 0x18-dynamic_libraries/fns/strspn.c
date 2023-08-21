#include "main.h"

/**
 * _strspn - gets the lenth of prefix substring
 * @s: search in this string
 * @accept: search for bytes from here
 * Return: no of matching bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;
	int quit = 0;

	for (i = 0; s[i] != '\0' && quit == 0; i++)
	{
		for (j = 0; accept[j] != '\0' && quit == 0; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			if (s[i] != accept[j])
				quit = 1;
		}
	}

	return (count);
}