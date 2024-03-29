#include "main.h"
#define NULL 0
/**
 * _strchr - locate 1st occurence of char in src
 * @s: string to search
 * @c: searches for this character
 * Return: pointer to that character in string /NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (s + i);
	else
		return NULL;
}