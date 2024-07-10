#include "hash_tables.h"

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
