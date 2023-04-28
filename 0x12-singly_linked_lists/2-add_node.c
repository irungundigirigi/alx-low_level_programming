#include "lists.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node - add node to beginning of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new; 

	if (str == NULL) 
		return (NULL);
	if (strdup(str) == NULL) 
		return (NULL);

	new = malloc(sizeof(list_t)); 
	if (new == NULL)
		return (NULL);

	new->str = strdup(str); 
	new->len = _strlen(str);

	if (head == NULL) 
		new->next = NULL;
	else
		new->next = *head;

	*head = new; 

	return (new);
}
