#include "main.h"
#define NULL 0

/**
 * strstr - find  pointer to first occurence of substring needle in string haystack.
 * @haystack: string searched
 * @needle: string searched for
 * Return: pointer beginning of located string/ NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}