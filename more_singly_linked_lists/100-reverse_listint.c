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

	
