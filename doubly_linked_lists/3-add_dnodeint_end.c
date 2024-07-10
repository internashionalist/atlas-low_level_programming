#include "lists.h"

/**
 * add_dnodeint_end - adds new tail node to doubly linked dlistint_t list
 * @head: double pointer to head node of list
 * @n: value to store in new tail node
 *
 * Return: address of new tail node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
       dlistint_t *new_tail; /* pointer to new tail node */

       new_tail = malloc(sizeof(dlistint_t)); /* malloc for new tail */
       if (new_tail == NULL) /* if malloc fails */
       {
              return (NULL); /* return NULL */
       }