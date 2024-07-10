#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at given index
 * @head: pointer to pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head; /* init pointer to current node */
	unsigned int index_iterator = 0; /* init iterator, set to 0 */

	if (*head == NULL) /* if list is empty */
	{
		return (-1); /* return -1 on failure */
	}

	

	