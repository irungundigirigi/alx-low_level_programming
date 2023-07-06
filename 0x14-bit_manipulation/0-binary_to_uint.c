#include "main.h"

/**
 * binary_to_uint - converts a binary no to unsigned int
 * @binary: binary
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *binary)
{
	int len, position_value;
	unsigned int j;

	if (!binary)
		return (0);

	j = 0;

	for (len = 0; binary[len] != '\0'; len++)
		;

	for (len--, position_value = 1; len >= 0; len--, position_value *= 2)
	{
		if (binary[len] != '0' && binary[len] != '1')
		{
			return (0);
		}

		if (binary[len] & 1)
		{
			j += position_value;
		}
	}

	return (j);
}
