#include "lists.h"

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: pointer to head of list
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_count = 0; /* node counter */

	while (h != NULL) /* iterate through list until NULL */
	{
		node_count++; /* increment counter by 1 */
		h = h->next; /* move to next node in list */
	}

	return (node_count); /* return number of nodes */
}
