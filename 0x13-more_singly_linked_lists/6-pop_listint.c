#include "lists.h"

/**
 * pop_listint - delete the head of linked list, return heads data
 * @head: linked list
 * Return: deleted head's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if(*head == NULL)
		return (0);
	tmp = *head;

	data = tmp->n;

	*head = tmp->next;
	free(tmp);

	return (data);


}
