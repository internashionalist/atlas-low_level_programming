#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of a listint_t list
 * @head: head of linked list
 * @n: value to add to new node
 *
 * Return: address of new node or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* new node */
