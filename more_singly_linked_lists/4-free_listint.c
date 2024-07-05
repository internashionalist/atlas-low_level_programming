#include "lists.h"

/**
 * free_listint - frees a linked listint_t list
 * @head: listint_t list to be freed
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node; /* temporary node */

	while (head != NULL) /* iterate through list */
	{
		temp_node = head; /* set temp_node to head */
		head = head->next; /* move head to next node */
		free(temp_node); /* free temp_node */
	}
}
