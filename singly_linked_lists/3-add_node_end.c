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
	list_t *last_node; /* create pointer to head */
	unsigned int len; /* length counter */
	char *string_copy; /* duplicate of string */

	new_node = malloc(sizeof(list_t)); /* allocate memory for new node */

	if (new_node == NULL) /* check for malloc failure */
	{
		return (NULL); /* return NULL on failure */
	}

	string_copy = strdup(str); /* copy string */
	len = 0; /* initialize counter */

	while (str[len] != '\0') /* iterate through string */
	{
		len++; /* increment counter */
	}

	new_node->str = string_copy; /* set string of new node */
	new_node->len = len; /* set length of new node */
	new_node->next = NULL; /* set new nodes next to NULL */

	if (*head == NULL) /* check if list is empty */
	{
		*head = new_node; /* set head to new node */
		return (*head); /* return address of new head node */
	}

	last_node = *head; /* set last node to head */

	while (last_node->next != NULL) /* iterate through list */
	{
		last_node = last_node->next; /* move to next node */
	}

	last_node->next = new_node; /* set last nodes next to new node */

	return (*head); /* return address of head node */
}
