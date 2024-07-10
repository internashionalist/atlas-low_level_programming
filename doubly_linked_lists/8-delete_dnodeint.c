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
		return (-1); /* return -1 on failure */

	if (index == 0) /* if index is at head */
	{
		*head = current_node->next; /* set head to next node */
		if (current_node->next != NULL) /* if next node is not NULL */
			current_node->next->prev = NULL; /* set prev of next node to NULL */

		free(current_node); /* free memory of old head */
		return (1); /* return 1 on success */
	}

	while (current_node != NULL && index_iterator < index) /* traverse to node before index */
	{
		current_node = current_node->next; /* move to next node */
		index_iterator++; /* increment iterator */
	}

	if (current_node == NULL) /* if index is out of range */
		return (-1); /* return -1 on failure */

	current_node->prev->next = current_node->next; /* I can't stand these lines */
	if (current_node->next != NULL) /* if not tail node */
		current_node->next->prev = current_node->prev; /* seriously this took FOREVER */

	free(current_node); /* erase index node from all memory.... */
	return (1); /* SUCCESS */

}
