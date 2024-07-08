#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: int
 * @next: points to the next node
 *
 * Description: node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_listint_safe - prints a linked list_int list
 * @head: first node of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *tortoise = head; /* slow pointer */
	listint_t *hare = head; /* fast pointer */
	size_t node_count = 0; /* counter */

	while (tortoise && hare && hare->next) /* while tortoise and hare exist */
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n); /* print tortoise */
		node_count++; /* increment node count */

		tortoise = tortoise->next; /* move tortoise to next node */
		hare = hare->next->next; /* move hare to next NEXT node */
		
		if (tortoise == hare) /* if tortoise and hare meet */
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			node_count++; /* print tortoise and increment node count */

			tortoise = tortoise->next; /* move tortoise to next node */

			while (tortoise != hare) /* while tortoise and hare don't meet */
			{
				printf("[%p] %d\n", (void *)tortoise, tortoise->n); /* print tortoise */
				node_count++; /* increment node count */
				tortoise = tortoise->next; /* move tortoise to next node */
			}

			printf("-> [%p] %d\n", (void *)hare, hare->n); /* print hare */
			return (node_count); /* return number of nodes */
		}
	}

	/* if there is no loop */
	while (head) /* while head exists */
	{
		printf("[%p] %d\n", (void *)head, head->n); /* print head */
		node_count++; /* increment node count */
		head = head->next; /* move head to next node */
	}

	return (node_count); /* return number of nodes */
}

/**
 * main - creates linked list and prints it
 * 
 * Return: 0 on success
 */

int main(void)


