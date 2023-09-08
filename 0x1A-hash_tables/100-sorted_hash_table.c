#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
        return (NULL);

    i = 0;
    while (i < size)
    {
        ht->array[i] = NULL;
        i++;
    }

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}


/**
 * shash_table_set - Adds an element to  sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_hash, *tmp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->snext;
	}
	new_hash = malloc(sizeof(shash_node_t));
	if (new_hash == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_hash->key = strdup(key);
	if (new_hash->key == NULL)
	{
		free(value_copy);
		free(new_hash);
		return (0);
	}
	new_hash->value = value_copy;
	new_hash->next = ht->array[index];
	ht->array[index] = new_hash;

	if (ht->shead == NULL)
	{
		new_hash->sprev = NULL;
		new_hash->snext = NULL;
		ht->shead = new_hash;
		ht->stail = new_hash;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_hash->sprev = NULL;
		new_hash->snext = ht->shead;
		ht->shead->sprev = new_hash;
		ht->shead = new_hash;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new_hash->sprev = tmp;
		new_hash->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new_hash;
		else
			tmp->snext->sprev = new_hash;
		tmp->snext = new_hash;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value of
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *hash_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	hash_node = ht->shead;
	while (hash_node != NULL && strcmp(hash_node->key, key) != 0)
		hash_node = hash_node->snext;

	return ((hash_node == NULL) ? NULL : hash_node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *hash_node;

	if (ht == NULL)
		return;

	hash_node = ht->shead;
	printf("{");
	while (hash_node != NULL)
	{
		printf("'%s': '%s'", hash_node->key, hash_node->value);
		hash_node = hash_node->snext;
		if (hash_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *hash_node;

	if (ht == NULL)
		return;

	hash_node = ht->stail;
	printf("{");
	while (hash_node != NULL)
	{
		printf("'%s': '%s'", hash_node->key, hash_node->value);
		hash_node = hash_node->sprev;
		if (hash_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *hash_node, *tmp;

	if (ht == NULL)
		return;

	hash_node = ht->shead;
	while (hash_node)
	{
		tmp = hash_node->snext;
		free(hash_node->key);
		free(hash_node->value);
		free(hash_node);
		hash_node = tmp;
	}

	free(head->array);
	free(head);
}