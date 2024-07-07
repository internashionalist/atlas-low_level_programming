#include "lists.h"

/**
 * reverse_listint - reverses a linked listint_t list
 * @head: pointer to first node
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL; /* previous node */
	listint_t *next_node = NULL; /* next node */
	listint_t *current_node = *head; /* current node */

	while (current_node != NULL) /* iterate through list */
	{
		next_node = current_node->next; /* set next node */
		current_node->next = prev_node; /* set next of current to prev */
		prev_node = current_node; /* set prev to current */
		current_node = next_node; /* set current to next */
	}

	*head = prev_node; /* set head to prev */
	return (*head); /* return new head */
}
