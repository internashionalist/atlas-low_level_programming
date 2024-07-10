#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL; /* init ptr to hash_table_t, set to NULL */
	unsigned long int iterator = 0; /* init iterator, set to 0 */

	new_table = malloc(sizeof(hash_table_t)); /* malloc for struct */
	if (new_table == NULL) /* if malloc fails */
		return (NULL); /* return NULL - failure */

	new_table->size = size; /* set size of new_table to.. uh.. size */

	new_table->array = malloc(sizeof(hash_node_t *) * size); /* malloc array */
	if (new_table->array == NULL) /* if malloc fails */
		return (NULL); /* return NULL - failure */

	while (iterator < size) /* traverse array */
	{
		new_table->array[iterator] = NULL; /* set each ptr in array to NULL */
		iterator++; /* increment iterator */
	}

	return (new_table); /* return shiny new hash table */
}
