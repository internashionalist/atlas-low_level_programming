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
	unsigned int index_counter; /* index counter */
	listint_t *current_node; /* current node */
	listint_t *temp_node; /* temporary node */

	if (head == NULL || *head == NULL) /* if head is NULL or list empty */
	{
		return (-1); /* return -1 */
	}