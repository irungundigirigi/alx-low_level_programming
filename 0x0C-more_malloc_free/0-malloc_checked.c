#include "main.h"

/**
 * malloc_checked - allocate memory, if failed terminate with status 98
 * @b: unsigned int memory size
 * Return: pointer to allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
