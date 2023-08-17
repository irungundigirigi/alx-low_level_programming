#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a doubly linked list
 * @head: head of linked list
 * @index: nth node index
 * Return: nth node or null if it doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int c;

	tmp = head;

	c = 0;
	while (tmp != NULL && c < index) {
		tmp = tmp->next;
		c++;
	}
	return (tmp);
}
