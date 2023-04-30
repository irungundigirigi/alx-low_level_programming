#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct listint_s - singly linked list
 * @n: integer data
 * @next: pointer to next node
 *
 * Description: initialises a data struct to be used for the project.
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


size_t print_listint(const listint_t *h);



#endif

