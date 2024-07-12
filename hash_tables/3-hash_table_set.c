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
	hash_node_t *new_node = NULL; /* init ptr to node struct, set to NULL */
	hash_node_t *current_node = NULL; /* init traversal ptr, set to NULL */
	unsigned long int index = 0; /* init index for hash table array, set to 0 */
	char *dup_value, *dup_key; /* init ptrs to duplicated value and key */

	if (!key || !*key || !ht || !value) /* if any parameter is NULL */
	{
		return (0); /* return 0 - failure */
	}
	dup_value = strdup(value); /* duplicate value of key */
	if (dup_value == NULL) /* if strdup fails */
	{
		return (0); /* return 0 - failure */
	}
	index = key_index((unsigned char *)key, ht->size); /* get index of key */
	current_node = ht->array[index]; /* set traversal ptr to head */
	while (current_node != NULL) /* traverse linked list at index position */
	{
		if (strcmp(current_node->key, key) == 0) /* if key is found */
		{
			free(current_node->value); /* free old value of key */
			current_node->value = dup_value; /* update value of key */
			return (1); /* value = duplicate, success */
		}
		current_node = current_node->next; /* move to next node */
	}
	new_node = malloc(sizeof(hash_node_t)); /* malloc for new_node */
	if (new_node == NULL) /* if malloc fails */
	{
		free(dup_value); /* free duplicated value */
		return (0); /* return 0 - failure */
	}
	dup_key = strdup(key); /* duplicate key */
	if (dup_key == NULL) /* if strdup fails */
	{
		free(dup_value); /* free duplicated value */
		free(new_node); /* free new_node */
		return (0); /* return 0 - failure */
	}
	new_node->key = dup_key; /* duplicate key */
	new_node->value = dup_value; /* duplicate value */
	new_node->next = ht->array[index]; /* link up new_node to head */
	ht->array[index] = new_node; /* update head to new_node */
	return (1); /* return 1 - success */
}
