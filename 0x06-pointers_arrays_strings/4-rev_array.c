#include "main.h"
#include <stdio.h>

/**
 * reverse_array- reverse the contents of an array of int
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;

	int h;

	for (i = 0; i < (n / 2); i++)
	{	/* store the current index in variable h */
		h = a[i];
		/* Switch the first and last non-switched indexs */
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
