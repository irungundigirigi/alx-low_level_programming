#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary string to be converted
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int sum = 0;

	if (b == NULL)
		return  (sum);

	/* find length*/
	for (len = 0; b[len] != '\0'; len++)
		;
	len -= 1;

	for (i = 0; b[i]; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (sum);

		if (b[i] == '1')
			sum += (1 * (1 << len));
		len--;
	}

	return (sum);
}
