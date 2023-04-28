#include "lists.h"

/**
 * _strlen - find the length of a string
 * @str: string
 * Return: length
 */
int strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node_end - add node to end of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *t; 


	if (str == NULL) 
		return (NULL);
	if (strdup(str) == NULL) 
		return (NULL);

	new_node = malloc(sizeof(list_t)); 
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); 
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL) 
		*head = new_node;
	else
	{
		t = *head;

		while (t->next != NULL)
			t = t->next;
		t->next = new_node;
	}

	return (new_node);
}
