#include "lists.h"

/**
 * print_dlistint - prints all elements of list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes;
	nodes = 0;

	if (h ==  NULL)
		return (nodes);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
