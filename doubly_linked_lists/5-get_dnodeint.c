#include "lists.h"

/**
 * *get_dnodeint_at_index - returns nth node of doubly linked dlistint_t list
 * @head: pointer to head node of list
 * @index: index of node to return
 *
 * Return: address of nth node or NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
