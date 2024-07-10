#include "hash_tables.h"
#include "0-hash_table_create.c"
#include "1-djb2.c"
#include "2-key_index.c"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table to add/update the key/value to
 * @key: key - cannot be an empty string
 * @value: value associated with the key, must be duplicated,
 * can be an empty string
 *
 * Return:  1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL; /* init ptr to hash_node_t struct, set to NULL */
	hash_node_t *current_node = NULL; /* init traversal ptr, set to NULL */
	unsigned long int index = 0; /* init index for hash table array, set to 0 */
	char *duplicate = NULL; /* init ptr to duplicated value, set to NULL */

	if (!key || !*key || !ht || !value) /* if any parameter is NULL */
		return (0); /* return 0 - failure */

	