#include "hash_tables.h"

/* shash_table_create - creates a sorted hash table
 * @size: size of array
 *
 * Return: pointer to this new SORTED hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int iterator = 0;

	if (size > 0)
	{
		new_table = malloc(sizeof(shash_table_t));
		if (new_table == NULL) /* check for malloc failure */
			return (NULL);

		new_table->size = size; /* size of new_table to size of array */
		new_table->array = malloc(sizeof(shash_node_t *) * size);
		if (new_table->array == NULL) /* check for malloc failure */
		{
			free(new_table);
			return (NULL);
		}

		while (iterator < size) /* traverse array */
		{
			new_table->array[iterator] = NULL; /* NULLify ptr in array */
			iterator++; /* then move on to the next one */
		}
	}

	return (new_table); /* return brand spankin' new sorted hash table */
}
