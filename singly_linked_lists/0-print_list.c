#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to head of a list_t list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{	
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	node_count++;
	h = h->next;



}
