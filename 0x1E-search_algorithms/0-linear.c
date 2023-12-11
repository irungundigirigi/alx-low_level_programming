#include "search_algorithms.h"
/**
 * linear_search - searches an array for a value and print each value checked
 * @array: pointer to first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of matched value in array or -1 if error or not found
 */
int linear_search(int *array, size_t size, int val) {
	int i;

	if (array == NULL || size == 0)
		return -1;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
