#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @min: starting point
 * @max: end point
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		*(ptr + i) = min++;

	return (ptr);
}
