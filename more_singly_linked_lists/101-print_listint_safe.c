#include "lists.h"

/**
 * print_listint_safe - prints a linked list_int list
 * @head: first node of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *tortoise; /* slow pointer */
	listint_t *hare; /* fast pointer */
	size_t node_count = 1; /* counter */

	if (head == NULL) /* check for NULL */
	{
		exit(98); /* exit status 98 */
	}

	tortoise = (listint_t *)head; /* set tortoise to head */
	hare = head->next; /* set hare to next node */

	while (hare) /* iterate through list */
	{
		if (tortoise == hare) /* if tortoise catches hare */
		{	/* print tortoise */
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n)
			return (node_count); /* return number of nodes */
		}
	

