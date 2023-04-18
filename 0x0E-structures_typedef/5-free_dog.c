#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: struct  dog pointer
 */

void free_dog(dog *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
