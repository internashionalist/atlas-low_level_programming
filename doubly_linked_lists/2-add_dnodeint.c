#include "lists.h"

/**
 * add_dnodeint - adds new head node to doubly linked dlistint_t list
 * @head: pointer to pointer to head of list
 * @n: value to store in new node
 * Return: address of new head node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head; /* pointer to new head node */

	new_node->n = n; /* set value of new node */
	new_node->prev = NULL; /* set prev of new node to NULL */
	