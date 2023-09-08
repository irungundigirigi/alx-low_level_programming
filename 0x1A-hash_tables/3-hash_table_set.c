#include "hash_tables.h"

/**
 * hash_table_set - Add / update element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: Key add
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash;
	char *value_dup;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
	}
	new_hash = malloc(sizeof(hash_node_t));
	if (new_hash == NULL)
	{
		free(value_dup);
		return (0);
	}
	new_hash->key = strdup(key);
	if (new_hash->key == NULL)
	{
		free(new_hash);
		return (0);
	}
	new_hash->value = value_dup;
	new_hash->next = ht->array[index];
	ht->array[index] = new_hash;

	return (1);
}