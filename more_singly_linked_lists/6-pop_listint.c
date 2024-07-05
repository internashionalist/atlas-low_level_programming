#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t list
 * @head: head of linked listint_t list
 *
 * Return: head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;