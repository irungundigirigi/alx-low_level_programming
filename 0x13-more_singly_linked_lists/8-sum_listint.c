#include "lists.h"

/**
 * sum_listint - sums all of the dataa(n) of a linked list
 * @head: pointer to head of linked list
 * Return: sum, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
