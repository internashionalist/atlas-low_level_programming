#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of listint_t list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node = NULL; /* temporary node */

	if (head == NULL) /* check if head is NULL */
	{
		return;
	}

	while (*head != NULL) /* iterate through list */
	{
		temp_node = *head; /* set temp_node to head */
		*head = (*head)->next; /* move head to next node */
		free(temp_node); /* free temp_node */
	}

	*head = NULL; /* set head to NULL */
}
