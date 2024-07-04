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

	if (new_node == NULL) /* check for malloc failure */
	{
		return (NULL);
	}

	while (str[len] != '\0') /* iterate through string */
	{
		len++; /* increment counter */
	}

	new_node->str = string_copy; /* set string of new node */
	new_node->len = len; /* set length of new node */
	new_node->next = *head; /* set new nodes next to head */
	(*head) = new_node; /* set head to new node */

	return (*head); /* return address of new head node */
}
	



	
