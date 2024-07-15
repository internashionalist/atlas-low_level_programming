#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *trav_node = NULL; /* traversal ptrs */
	hash_node_t *next_node = NULL; /* traversal ptrs */
	unsigned long int iterator; /* iterator for array */

	if (ht == NULL) /* if hash table is NULL */
		return; /* return nothing */
	for (iterator = 0; iterator < ht->size; iterator++) /* traverse array */
	{
		trav_node = ht->array[iterator]; /* set traversal ptr */
		while (trav_node != NULL) /* traverse linked list */
		{
			next_node = trav_node->next; /* set next node */
			free(trav_node->key); /* free key */
			free(trav_node->value); /* free value */
			free(trav_node); /* free current node */
			trav_node = next_node; /* set current node to next node */
		}
	}
	free(ht->array); /* free array */
	free(ht); /* free hash table */
}
