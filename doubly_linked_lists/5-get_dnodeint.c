#include "lists.h"

/**
 * *get_dnodeint_at_index - returns nth node of doubly linked dlistint_t list
 * @head: pointer to head node of list
 * @index: index of node to return
 *
 * Return: address of nth node or NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head; /* init pointer to head */
	unsigned int index_count = 0; /* init index counter, set to 0 */

	while (current_node != NULL) /* traverse list until NULL */
	{
		if (node_count == index) /* if index is found */
		{
			return (current_node); /* return address of that node */
		}

