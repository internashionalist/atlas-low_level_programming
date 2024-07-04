#include "lists.h"

/**
 * free_list - frees a linked list_t list
 * @head: head of linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp_node; /* temp node to free */

	while (head != NULL) /* iterate through list */
	{
		temp_node = head; /* set temp to head */
		head = head->next; /* move head to next node */
		free(temp_node->str); /* free string of temp */
		free(temp_node); /* free temp */
	}
}
