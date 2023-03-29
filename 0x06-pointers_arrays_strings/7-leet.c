#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i, j;

	for (i = 0; i != '\0'; i++)
	{
		int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};	
		int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

		for (i = 0; s[i] != '\0'; i++)
		{	
			for (j = 0; a[j] != '\0'; j++)
			{
				if (s[i] == a[j])
					s[i] = b[i];

			}	
		}		

	}

	return (s);
}	
