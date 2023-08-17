#include "lists.h"

/**
 * add_dnodeint_end - Adds a new_node node to end of a double list
 * @head: double pointer to head node
 * @n: new_node nodes value
 * Return: Addr of new_node node, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	while (temp && temp->next)
		temp = temp->next;

	if (temp)
	{
		new_node->prev = temp;
		temp->next = new_node;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	return (new_node);
}
