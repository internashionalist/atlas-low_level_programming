#include "lists.h"

/**
 * print_listint_safe - prints a linked list_int list
 * @head: first node of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0; /* number of nodes */
	const listint_t *current_node = head; /* current node */

	while (current_node) /* iterate through list */
	{	/* print node */
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		node_count++; /* increment node_count */


