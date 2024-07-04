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
	list_t *new_node; /* create new node */
	unsigned int len; /* length of string */
	char *string_copy; /* copy of string */
