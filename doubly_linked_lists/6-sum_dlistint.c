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

	if (head == NULL) /* if list is empty */
	{
		return (0); /* return 0 */
	}
	