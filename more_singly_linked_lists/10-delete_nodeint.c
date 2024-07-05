#include "lists.h"

/**
 * delete_nodeint_at_index- deletes node of linked listint_t list where specified
 * @head: head of linked listint_t list
 * @index: position of node to be deleted
 *
 * Return: 1 if succeeded or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int index_counter = 0; /* index counter */
	listint_t *current_node; /* current node */
	listint_t *temp_node; /* temporary node */

	if (head == NULL || *head == NULL) /* if head is NULL or list empty */
	{
		return (-1); /* return -1 */
	}

	if (index == 0) /* if node being deleted is the head node */
	{
		temp_node = *head; /* set temp_node to head */
		*head = (*head)->next; /* move head to next node */
		free(temp_node); /* free temp_node */
		return (1); /* return 1 on success*/
	}

	current_node = *head; /* set current_node to head */

	while (index_counter < index - 1) /* iterate through list until specified */
	{
		if (current_node == NULL) /* if current_node NULL */
		{
			return (-1); /* return -1 */
		}
		current_node = current_node->next; /* move to next node */
		index_counter++; /* increment index_counter */
	}

	temp_node = current_node->next; /* set temp_node to next node */
	current_node->next = temp_node->next; /* set next of current_node */
	free(temp_node); /* free temp_node */

	return (1); /* return 1 on success */
}
