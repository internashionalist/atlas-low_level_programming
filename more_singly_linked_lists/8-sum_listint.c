#include "lists.h"

/**
 * sum_listint - finds sum of all data in a linked listint_t list
 * @head: head of linked listint_t list
 *
 * Return: sum of all data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0; /* sum of all data */
