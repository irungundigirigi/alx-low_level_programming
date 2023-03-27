#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: int pointer type
 * @b: int pointer type
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
