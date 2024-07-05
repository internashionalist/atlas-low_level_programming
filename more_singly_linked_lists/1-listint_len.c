#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: head node of listint_t list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0; /* node counter */

	while (h != NULL) /* iterate through list */
	{
		node_count++; /* increment node counter */
		h = h->next; /* move to next node */
	}

	return (node_count); /* return number of nodes */
}
