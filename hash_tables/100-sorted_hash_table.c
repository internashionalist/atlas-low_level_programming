#include "hash_tables.h"

/* shash_table_create - creates a sorted hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created SORTED hash table
 */

shash_table_t *shash_table_create(unsigned long int size);
{
	shash_table_t *new_table = NULL; /* init ptr to hash table, NULL */
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	unsigned long int iterator = 0; /* init iterator, 0 */

	if (ht == NULL) /* if malloc fails */
		return (NULL); /* return NULL - failure */

	ht->size = size; /* set size of new_table to given size */
	ht->array = malloc(sizeof(shash_node_t *) * size); /* malloc array */
	if (ht->array == NULL) /* if malloc fails */
	{
		free(ht); /* free hash table */
		return (NULL); /* return NULL - failure */
	}
