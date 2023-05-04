#include "main.h"

/**
*set_bit - sets a bit to 1 and given index
*@n: number
*@index: index to be set
*Return: 1 on success, -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}

