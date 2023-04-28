#include "lists.h"

/**
 * list_len - prints length of list_t
 * @h: linked list
 * Return: nodes/length in linked list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (count);
}
