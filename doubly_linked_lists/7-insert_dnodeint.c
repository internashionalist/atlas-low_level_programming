#include "lists.h"

/**
 * create_node - creates a new node with given value
 * @n: value to store in new node
 *
 * Return: address of new node or NULL if failed
 */
dlistint_t *create_node(int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t)); /* malloc for new node */

	if (new_node == NULL) /* if malloc fails */
	{
		return (NULL); /* return NULL at failure */
	}

	new_node->n = n;	  /* set value of new node to n */
	new_node->prev = NULL; /* set prev of new node */
	new_node->next = NULL; /* set next of new node */

	return (new_node); /* return address of new node */
}

/**
 * traverse_to_index - traverses to the node BEFORE the given index
 * @h: pointer to head of the list
 * @idx: index where new node to be inserted
 * @index_finder: pointer to index counter
 *
 * Return: pointer to the node before the given index or NULL if failed
 */

dlistint_t *traverse_to_index(dlistint_t *h, unsigned int idx, unsigned int *index_finder)
{
	dlistint_t *current_node = h; /* make current node point to head */

	while (current_node->next != NULL) /* traverse list until NULL */
	{
		current_node = current_node->next; /* move to next node */
		(*index_finder)++;			/* increment index counter */
	}

	if (idx > *index_finder) /* if index is out of range */
	{
		return (NULL); /* return NULL at failure */
	}

	while (*index_finder != idx) /* traverse to node before index */
	{
		current_node = current_node->prev; /* move to previous node */
		(*index_finder)--;			/* decrement index counter */
	}

	return (current_node); /* return pointer to node before index */
}

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
	dlistint_t *new_node;	   /* pointer to new node */
	dlistint_t *current_node;	   /* pointer to current node */
	unsigned int index_finder = 0; /* index counter */

	if (h == NULL) /* check if head is NULL */
		return (NULL); /* return NULL at failure */

	if (idx == 0) /* if index is at head */
		return (add_dnodeint(h, n)); /* FUNCTION CALL FROM TASK 2 */
	/* FUNCTION CALL TO TRAVERSE TO INDEX */
	current_node = traverse_to_index(*h, idx, &index_finder);

	if (current_node == NULL) /* if index is out of range */
		return (NULL); /* return NULL at failure */

	if (idx == index_finder) /* if index is at tail */
		return (add_dnodeint_end(h, n)); /* FUNCTION CALL FROM TASK 3 */

	new_node = create_node(n); /* FUNCTION CALL TO CREATE NEW NODE */

	if (new_node == NULL) /* if malloc fails */
		return (NULL); /* return NULL at failure */

	new_node->next = current_node->next; /* set next of new node */
	new_node->prev = current_node;	  /* set prev of new node */

	if (current_node->next != NULL) /* if idx is not at tail */
		current_node->next->prev = new_node; /* set prev of next node */

	current_node->next = new_node; /* set next of current node */

	return (new_node); /* return address of new node */
}
