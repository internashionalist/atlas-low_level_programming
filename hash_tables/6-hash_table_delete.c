#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 * 
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node, *next_node; /* traversal ptrs */
	unsigned long int iterator; /* iterator for array */

	if (ht == NULL) /* if hash table is NULL */
		return; /* return nothing */

	for (iterator = 0; iterator < ht->size; iterator++) /* traverse array */
	{
		current_node = ht->array[iterator]; /* set traversal ptr to head */
		while (current_node != NULL) /* traverse linked list */
		{