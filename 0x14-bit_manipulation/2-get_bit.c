#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index
 * Return: bit 0 or 1, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int _bits;

	/* validate range */
	_bits = (sizeof(unsigned long int) * 8);
	if (index > _bits)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
