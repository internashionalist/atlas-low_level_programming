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

	new_head = malloc(sizeof(dlistint_t)); /* malloc for new head */
	if (new_head == NULL) /* if malloc fails */
	{
		return (NULL); /* return NULL */
	}

	new_head->n = n; /* set value of new node */
	new_head->prev = NULL; /* set prev of new node to NULL */
	new_head->next = *head; /* set next of new node to current head */

	if (*head != NULL) /* if list is not empty */
	{
		(*head)->prev = new_head; /* set prev of current head to new node */
	}

	*head = new_head; /* set head to new node */

	return (new_head); /* return address of new node */
}
