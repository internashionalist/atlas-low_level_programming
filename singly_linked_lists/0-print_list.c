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
<<<<<<< HEAD
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}
=======
        {
			printf("[%d] %s\n", h->len, h->str);
		}
    node_count++;
    h = h->next;
	}
    return (node_count);
}	
>>>>>>> 43eaddb05077d5db5e0b1940546305e70d1b8382
