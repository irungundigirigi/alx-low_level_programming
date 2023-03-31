#include "main.h"

/**
 * cap_string - capitalize first letter of each word
 * @s: string to be manipulated
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	/* check for cuppercase in first index of string */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	while (s[i] != '\0') /* Iterate through the string passed */
	{
		/* checks for lowercase letter && prior char is separator,then capitalise */
		if ((s[i] >= 'a' && s[i] <= 'z')
		    && (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
			|| s[i - 1] == '\n'))
		    
			s[i] = s[i] - 'a' + 'A';
		i++;
		
	}
	return (s);
}
