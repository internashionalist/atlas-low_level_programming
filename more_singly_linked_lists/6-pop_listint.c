#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t list
 * @head: head of linked listint_t list
 *
 * Return: head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node = NULL; /* temporary node */
	int data; /* head node's data */

	if (!head || !*head) /* check if head is NULL or list is empty */
	{
		return (0); /* return 0 */
	}

	temp_node = *head; /* set temp_node to head */
	data = temp_node->n; /* set data to head node's data */
	*head = (*head)->next; /* move head to next node */
	free(temp_node); /* free temp_node */

	return (data); /* return head node's data */
}
