#include "lists.h"

/**
 * free_dlistint - frees a doubly linked dlistint_t list
 * @head: pointer to head node of list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node; /* pointer for traversal */
