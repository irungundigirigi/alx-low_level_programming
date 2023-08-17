#include "lists.h"

/**
 * sum_dlistint - get sum of all data 'n' of double linked list
 * @head: head of list
 * Return: sum of all data, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	tmp = head;
	sum = 0;
	while (tmp != NULL) 
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return(sum);
}
