#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given index
 * @h: pointer to pointer to head of list
 * @idx: index where new node to be inserted
 * @n: value to store in new node
 *
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{