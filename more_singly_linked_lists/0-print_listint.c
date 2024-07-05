#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: head of linked listint_t list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0; /* node counter */

	

	while (h != NULL) /* iterate through list */
	{
		printf("%d\n", h->n); /* print node value */
		node_count++; /* increment node counter */
		h = h->next; /* move to next node */
	}

	return (node_count); /* return number of nodes */
}