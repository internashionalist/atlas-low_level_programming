#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to search
 * @key: key to search for
 *
 * Return: value associated with the element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index; /* index of key in array */
	hash_node_t *current_node; /* traversal ptr */

	if (ht == NULL || key == NULL) /* if hash table or key is NULL */
		return (NULL); /* return NULL */

	index = key_index((unsigned char *)key, ht->size); /* FUNCTION - TASK 2 */

	current_node = ht->array[index]; /* set traversal ptr to head of list */
	while (current_node != NULL) /* traverse linked list at index */
	{
		if (strcmp(current_node->key, key) == 0) /* if key is found */
			return (current_node->value); /* return value */
		current_node = current_node->next; /*  or move to next node */
	}
	return (NULL); /* return NULL if key not found */
}
