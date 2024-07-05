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
	unsigned int index_counter; /* index counter */
	listint_t *new_node; /* new node */
	listint_t *current_node; /* current node */