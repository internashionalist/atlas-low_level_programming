#include "lists.h"

/**
 * add_node - adds new node to start of a linked list_t list
 * @head: head of list
 * @str: string to add to new node
 *
 * Return: address of new node or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* create new node */
	unsigned int len; /* length counter */
	char *string_copy; /* duplicate of string */

	new_node = malloc(sizeof(list_t)); /* allocate memory for new node */
	string_copy = strdup(str); /* copy string */
	len = 0; /* initialize counter */

	if (string_copy != NULL) /* check if string copy is successful */
	
