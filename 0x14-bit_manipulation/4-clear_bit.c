#include "main.h"

/**
 * clear_bit - sets bit value to 0 at given index.
 * @n: pointer of an unsigned long int.
 * @index: bit index
 *
 * Return: 1 if it worked, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int z;

	if (index > 63)
		return (-1);

	z = 1 << index;

	if (*n & z)
		*n ^= z;

	return (1);
}
