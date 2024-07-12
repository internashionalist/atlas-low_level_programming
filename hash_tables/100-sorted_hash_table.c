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