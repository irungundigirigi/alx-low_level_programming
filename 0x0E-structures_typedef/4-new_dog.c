#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * len - find string length
 * @str: string
 * Return: length
 */
int len(char *str)
{
	int i;

	for (i = 0; *(str + i) =! '\0'; i++)
		;
	return (i);
}
/**
 * strcpy - copy string pointed to by src to dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= len(src); i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - create new  struct dog instance
 * @name: string
 * @age: float
 * @owner: char
 * Return: initialized struct dog instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *name_copy;
	char *owner_copy;

	dog1 = malloc(sizeof(dog_t)); 
	if (dog1 == NULL)
		return (NULL);

	dog1->age = age;

	if (name != NULL)
	{
		name_copy = malloc(len(name) + 1);
		if (name_copy == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = strcpy(name_copy, name);
	}
	else
		dog1->name = NULL;

	if (owner != NULL)
	{
		owner_copy = malloc(len(owner) + 1);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(dog1);
			return (NULL);
		}
		dog1->owner = strcpy(owner_copy, owner);
	}
	else
		dog1->owner = NULL;

	return (dog1);
}
