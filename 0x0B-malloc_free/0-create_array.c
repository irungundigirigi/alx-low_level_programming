#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Create an array of chars & initialize it
 * @size: size of array
 * @c: fill array with c
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < (int)size; i++)
	{
		*(array + i) = c;
	}

	*(array + i) = '\0';

	return (array);
}
