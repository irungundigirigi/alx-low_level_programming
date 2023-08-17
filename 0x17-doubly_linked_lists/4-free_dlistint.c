#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *h;

	if (head == NULL)
		return;
	tmp = head;
	while (tmp->prev)
		tmp = tmp->prev;
	while (tmp)
	{
		h = tmp;
		tmp = tmp->next;
		free(h);
	}
}
