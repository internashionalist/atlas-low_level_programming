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
       dlistint_t *current_node; /* pointer to current node */

       if (head == NULL) /* check if head is NULL */
       {
              return (NULL); /* return NULL */
       }

       new_tail = malloc(sizeof(dlistint_t)); /* malloc for new tail */
       if (new_tail == NULL) /* if malloc fails */
       {
              return (NULL); /* return NULL */
       }

       new_tail->n = n; /* set value of new tail */
       new_tail->next = NULL; /* set next of new tail to NULL */

       if (*head == NULL) /* if list is empty */
       {
              new_tail->prev = NULL; /* set prev of new tail to NULL */
              new_tail->next = NULL; /* set next of new tail to NULL */
              *head = new_tail; /* set pointer to head to new tail */
       }

       else /* if list is not empty */
       {
              current_node = *head; /* set current node to head */

              while (current_node->next != NULL) /* traverse list until last node */
              {
                     current_node = current_node->next; /* move to next node */
              }

              current_node->next = new_tail; /* set next of current node to new tail */
              new_tail->prev = current_node; /* set prev of new tail to current node */
              new_tail->next = NULL; /* set next of new tail to NULL */
       }

       return (new_tail); /* return address of new tail */
}
