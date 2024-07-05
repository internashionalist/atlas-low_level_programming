#include "lists.h"

/**
 * get_nodeint_at_index- returns nth node of a listint_t linked list.
 * @head: head of linked list
 *
 * @index: integer index of node
 *
 * Return: a pointer to the requested node or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i; /* index counter */
	listint_t *current_node; /* current node */

	if (head == NULL) /* check if head is NULL */
	{
		return (NULL); /* return NULL */
	}

	current_node = head; /* set current_node to head */

	for (i = 0; i < index; i++) /* iterate through list */
	{
		if (current_node == NULL) /* check if current_node is NULL */
		{
			return (NULL); /* return NULL */
		}

		current_node = current_node->next; /* move to next node */
	}

	return (current_node); /* return current_node */
}

