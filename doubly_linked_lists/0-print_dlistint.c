#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
       int node_count = 0; /* node counter */

       while (h != NULL) /* iterate through list until NULL */
       {
              printf("%d\n", h->n); /* print value of current node */
              node_count++; /* increment counter by 1 */
              h = h->next; /* move to next node in list */
       }

       return (node_count); /* return number of nodes */
}
