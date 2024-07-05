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

	new_node = malloc(sizeof(listint_t)); /* allocate memory for new node */

	if (new_node == NULL) /* check if memory allocation failed */
	{
		return (NULL); /* return NULL on failure */
	}