#include "main.h"

/**
 * _strlen - Find length of string. Iterates over the characters from i = 0
 * until '\0' null character is encountered
 * @s: takes a char argument
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

		return (i);
}