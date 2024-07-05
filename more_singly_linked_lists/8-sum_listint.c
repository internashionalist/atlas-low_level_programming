#include "lists.h"

/**
 * sum_listint - finds sum of all data in a linked listint_t list
 * @head: head of linked listint_t list
 *
 * Return: sum of all data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0; /* sum of all data */
	listint_t *temp_node; /* temporary node */

	if (head == NULL) /* if list is empty */
	{
		return (0); /* return 0 */
	}

	temp_node = head; /* set temp_node to head */

	while (temp_node != NULL) /* iterate through list */
	{
		sum += temp_node->n; /* add each node's data to sum */
		temp_node = temp_node->next; /* move to next node */
	}

	return (sum); /* return sum of all data */
}
