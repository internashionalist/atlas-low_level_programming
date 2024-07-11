#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table in order of array
 * @ht: hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL; /* traversal ptr for nodes */
	unsigned long int iterator; /* iterator for array */
	int first = 1; /* flag for comma */

	if (ht == NULL) /* if hash table is NULL */
		return; /* return nothing, print nothing */

	printf("{"); /* print first brace */

	for (iterator = 0; iterator < ht->size; iterator++) /* traverse array */
	{
		node = ht->array[iterator]; /* set traversal ptr to head */
		while (node != NULL) /* traverse linked list */
		{
			if (first == 0) /* if not first node */
				printf(", "); /* print comma and a space */
			printf("'%s': '%s'", node->key, node->value); /* print key/value */
			first = 0; /* set flag to 0 after first node */
			node = node->next; /* move to next node */
		}
	}
	printf("}\n"); /* print last brace */
}
