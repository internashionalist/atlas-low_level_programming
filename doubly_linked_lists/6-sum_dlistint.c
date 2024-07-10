#include "lists.h"

/**
 * sum_dlistint - returns sum of all data
 * in a doubly linked dllistint_t list
 * @head: pointer to head of list
 *
 * Return: sum of all data in list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head; /* init traversal pointer */
	int sum = 0; /* init sum, set to 0 */

	if (head == NULL) /* if list is empty */
	{
		return (0); /* return 0 */
	}

	while (current_node != NULL) /* traverse list until NULL */
	{
		sum += current_node->n; /* add data of current node to sum */
		current_node = current_node->next; /* move to next node */
	}

	return (sum); /* return sum of all data */
}
