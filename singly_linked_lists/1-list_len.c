#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: head node
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int node_count = 0; /* counter */

	while (h != NULL) /* iterate through list */
	{
		node_count++; /* increment counter */
		h = h->next; /* move to next node */
	}
	return (node_count); /* return number of nodes */
}
