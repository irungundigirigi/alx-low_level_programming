#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at position n
 * @head: pointer to first node of the linked list
 * @idx: position to insert node
 * @n: new nodes data
 * Return: addr of new node, NULL if failed
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *tmp;

	/* if list is empty */
	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	/* if inserting as first node (head) */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* transverse to the node before index */
	tmp = *head;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	/* insert node*/
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
