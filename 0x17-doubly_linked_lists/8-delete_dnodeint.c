#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index of double linked list
 * @head: double pointer to links head
 * @index: index position to remove from.
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp, *next, *prev;
    unsigned int c;

    if (*head == NULL)
        return (-1);

    tmp = *head;
    c = 0;
    prev = NULL;
    while (tmp && c < index)
    {
        prev = tmp;
        tmp = tmp->next;
        c++;
    }

    if (tmp == NULL)
        return (-1);

    next = tmp->next;

    if (prev == NULL)
    {
        free(tmp);
        if (next != NULL)
        {
            next->prev = NULL;
            *head = next;
        }
        else
            *head = NULL;
    }
    else if (next == NULL)
    {
        prev->next = NULL;
        free(tmp);
    }
    else
    {
        prev->next = next;
        next->prev = prev;
        free(tmp);
    }

    return (1);
}

