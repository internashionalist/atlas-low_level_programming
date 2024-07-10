#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given index
 * @h: pointer to pointer to head of list
 * @idx: index where new node to be inserted
 * @n: value to store in new node
 *
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node; /* pointer to new inserted node */
	dlistint_t *current_node; /* pointer to current node */
	unsigned int index_count = 0; /* index checker, set to 0 */
	
	if (h == NULL) /* check if head is NULL */
	{
		return (NULL); /* return NULL at failure */
	}

	if (idx == 0) /* if index is at head */
	{
		return (add_dnodeint(h, n)); /* FUNCTION CALL FROM TASK 2 */
	}