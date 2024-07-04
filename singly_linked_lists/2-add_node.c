#include "lists.h"

/**
 * add_node - adds new node to start of a linked list_t list
 * @head: head of list
 * @str: string to add to new node
 *
 * Return: address of new node or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{