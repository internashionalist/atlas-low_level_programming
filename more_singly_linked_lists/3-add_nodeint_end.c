#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a listint_t list
 * @head: head of linked list
 * @n: value to add to new node
 *
 * Return: pointer to the new node or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; /* new node */
	listint_t *last_node = *head; /* last node */

	new_node = malloc(sizeof(listint_t)); /* allocate memory for new node */

	if (new_node == NULL) /* check if memory allocation failed */
	{
		return (NULL); /* return NULL on failure */
	}

	new_node->n = n; /* set value of new node */
	new_node->next = NULL; /* set next of new node to NULL */

	if (*head == NULL) /* check if list is empty */
	{
		*head = new_node; /* set head to new node */
		return (new_node); /* return address of new node */
	}

	