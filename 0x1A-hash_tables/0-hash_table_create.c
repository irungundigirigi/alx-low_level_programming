#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The array size
 *
 * Return: NULL if error occurs / pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

	new_hash_table = malloc(sizeof(hash_table_t));

	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->size = size;

	/* Allocate memory for the array of pointers */
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < size; i++)
	{
		new_hash_table->array[i] = NULL;
	}

	return (new_hash_table);
}
