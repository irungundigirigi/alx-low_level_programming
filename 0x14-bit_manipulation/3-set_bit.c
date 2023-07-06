#include "main.h"

/**
 * set_bit - sets bit value to 1 at given index.
 * @n: pointer of an unsigned long int.
 * @index: bit index
 *
 * Return: 1 if it worked, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int z;

	if (index > 63)
		return (-1);

	z = 1 << index;
	*n = (*n | z);

	return (1);
}
