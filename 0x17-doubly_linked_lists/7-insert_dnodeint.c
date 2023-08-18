#include "lists.h"

/**
 * insert_dnodeint_at_idx - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int count = 1;
    dlistint_t *tmp, *prev, *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    tmp = *h;

    while (tmp && count < idx)
    {
        prev = tmp;
        tmp = tmp->next;
        count++;
    }

    if (idx == 0)
    {
        *h = new_node;
        new_node->prev = NULL;
        new_node->next = (tmp == NULL) ? NULL : tmp;
        return (new_node);
    }

    if (idx == 1)
    {
        prev = *h;
        tmp = ((*h)->next == NULL) ? NULL : (*h)->next;
        new_node->prev = prev;
        new_node->next = tmp;
        prev->next = new_node;
        if (tmp)
            tmp->prev = new_node;
        return (new_node);
    }

    if (idx == count && tmp == NULL)
    {
        if (prev != NULL)
        {
            new_node->prev = prev;
            new_node->next = NULL;
            prev->next = new_node;
            return (new_node);
        }
        free(new_node);
        return (NULL);
    }
    else if (idx != count && tmp == NULL)
    {
        free(new_node);
        return (NULL);
    }

    prev = tmp;
    tmp = tmp->next;
    new_node->prev = prev;
    new_node->next = tmp;
    prev->next = new_node;
    tmp->prev = new_node;
    return (new_node);
}

