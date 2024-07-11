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

	duplicate = strdup(value); /* duplicate value of key */
	if (duplicate == NULL) /* if strdup fails */
		return (0); /* return 0 - failure */

	index = key_index((const unsigned char *)key, ht->size); /* CALL FUNCTION FROM TASK 2 */

	new_node = malloc(sizeof(hash_node_t)); /* malloc for new_node */
	if (new_node == NULL) /* if malloc fails */
		return (0); /* return 0 - failure */

	new_node->key = strdup(key); /* duplicate key */
	if (new_node->key == NULL) /* if strdup fails */
		return (0); /* return 0 - failure */

	new_node->value = duplicate; /* set value of new_node to duplicated value */
	new_node->next = NULL; /* set next of new_node to NULL */

	if (ht->array[index] == NULL) /* if index of hash table array is NULL */
	{
		ht->array[index] = new_node; /* set index of hash table array to new_node */
		return (1); /* return 1 - success */
	}

	current_node = ht->array[index]; /* set current_node to head at index position */

	while (current_node != NULL) /* traverse linked list at index position */
	{
		if (strcmp(current_node->key, key) == 0) /* if key is found */
		{
			current_node->value = duplicate; /* update value to duplicate */
			return (1); /* return 1 - success */
		}

		current_node = current_node->next; /* move to next node */
	}

	new_node->next = ht->array[index]; /* link up new_node to head */
	ht->array[index] = new_node; /* update head to new_node */

	return (1); /* return 1 - success */
}
