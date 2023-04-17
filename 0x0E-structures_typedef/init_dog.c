#include "main.h"
#include <main.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct dog
 * @name: string for name
 * @age:integer
 * @owner: owner name, string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
