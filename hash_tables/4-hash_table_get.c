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
	int index; /* index of key in hash table */
	hash_node_t *trav_node; /* traversal ptr for nodes */

	if (ht == NULL || key == NULL) /* if there is no hash table or key */
		return (NULL); /* return NULL */

	index = key_index((unsigned char *)key, ht->size); /* FUNCTION - TASK 2 */

	trav_node = ht->array[index]; /* set traversal ptr to head of list */
	while (trav_node != NULL) /* traverse linked list at index */
	{
		if (strcmp(trav_node->key, key) == 0) /* if key is found */
			return (trav_node->value); /* return value */
		trav_node = trav_node->next; /*  or move to next node */
	}
	return (NULL); /* return NULL if key not found */
}
