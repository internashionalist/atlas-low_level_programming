#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL; /* init ptr to hash_table_t struct, set to NULL */
	unsigned long int iterator = 0; /* init iterator, set to 0 */

	new_table = malloc(sizeof(hash_table_t)); /* malloc for hash_table_t struct */


	