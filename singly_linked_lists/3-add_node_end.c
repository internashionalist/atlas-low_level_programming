#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list_t list
 * @head: head of list
 * @str: str to be added to new node
 *
 * Return: address of new node or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* create new node */
	list_t *last_node; /* create last node */
	unsigned int len; /* length counter */
	char *string_copy; /* duplicate of string */

	new_node = malloc(sizeof(list_t)); /* allocate memory for new node */

	if (new_node == NULL) /* check for malloc failure */
	{
		return (NULL);
	}

	