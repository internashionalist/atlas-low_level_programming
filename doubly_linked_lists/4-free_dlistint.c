#include "lists.h"

/**
 * free_dlistint - frees a doubly linked dlistint_t list
 * @head: pointer to head node of list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head; /* init pointer to head */
	dlistint_t *next_node; /* init pointer to next node */

	while (current_node != NULL) /* traverse list until NULL */
	{
		next_node = current_node->next; /* move to next node */
		free(current_node); /* free current node */
		current_node = next_node; /* move to next nodes */
	}

	head = NULL; /* NULLify head - do I even need this? */
}
