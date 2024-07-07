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

	while (*head) /* iterate through list */
	{
		next_node = (*head)->next; /* set next_node to next node */
		(*head)->next = prev_node; /* set next of head to prev */
		prev_node = *head; /* set prev_node to head */
		*head = next_node; /* set head to next_node */
	}

	*head = prev_node; /* set head to prev_node */
	return (*head); /* return new head */
}
