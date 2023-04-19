#include <stddef.h>

/**
 * array_iterator - execute a function given as parameter on each array element
 * @array: array
 * @size: size of array
 * @action: pointer to function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}


