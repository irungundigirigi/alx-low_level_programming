#include "main.h"

/**
 * flip_bits - gets the no of bits you would need to flip to get n from m
 * @n: initial number
 * @m: final number
 * Return: no of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int i = 0;

	while (flipped)
	{
		if (flipped & 1)
			i++;

		flipped >>= 1;
	}
	return (i);
}
