#include "main.h"

/**
 * flip_bits - return no of bits to flip to
 * get from a no to another
 * @n: first no
 * @m: second number
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_count = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			flip_count++;

		n >>= 1;
		m >>= 1;
	}

	return (flip_count);
}
