#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: head of linked list
 * @idx: index of new node to be added
 * @n: value to add to new node
 *
 * Return: address of new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index_counter = 0; /* index counter */
	listint_t *new_node; /* new node */
	listint_t *current_node; /* current node */

	new_node = malloc(sizeof(listint_t)); /* allocate memory for new node */

	if (head == NULL) /* if list is empty */
	{
		return (NULL); /* return NULL */
	}

	if (new_node == NULL) /* check if memory allocation failed */
	{
		return (NULL); /* return NULL on failure */
	}

	new_node->n = n; /* set value of new node */

	if (idx == 0) /* if new node is to be added at beginning */
	{
		new_node->next = *head; /* set next of new node to head */
		*head = new_node; /* set head to new node */
		return (new_node); /* return address of new node */
	}

	current_node = *head; /* set current_node to head */

	while (index_counter < idx - 1) /* iterate through list until index */
	{
		current_node = current_node->next; /* move to next node */
		index_counter++; /* increment index_counter */
	}

	new_node->next = current_node->next; /* set next of new_node to current_node's next */
	current_node->next = new_node; /* set next of current_node to new_node */

	return (new_node); /* return address of new node */
}
