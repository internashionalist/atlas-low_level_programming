#include "lists.h"

/**
 * add_dnodeint - adds new head node to doubly linked dlistint_t list
 * @head: pointer to pointer to head of list
 * @n: value to store in new node
 * Return: address of new head node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{