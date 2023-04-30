#include "lists.h"

/**
 * add_nodeint - adds node at beginning of list
 * @head: pointer to header pointer of list
 * @n: data to add
 * Return: address of new  node, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_node;

	_node = malloc(sizeof(listint_t));

	if (_node == NULL)
		return (NULL);
	_node->n = n;

	_node->next = *head; /* point new node to first node */
	*head = _node; /* point list pointer to new node */

	return (_node);
}

