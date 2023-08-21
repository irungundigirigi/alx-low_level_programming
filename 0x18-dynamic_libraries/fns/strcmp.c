#include "main.h"

/**
 * _strcmp - compares two strings according to ASCII values
 * @s1: string 
 * @s2: string
 * Return: O if strings are equal, non zero if strings are not equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return(0);
}