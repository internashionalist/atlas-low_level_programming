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

		new_table->shead = NULL; /* NULLify head of list */
		new_table->stail = NULL; /* same with tail */

		for (iterator = 0; iterator < size; iterator++) /* traverse array */
		{
			new_table->array[iterator] = NULL; /* NULLify ptr in array */
		}

		return (new_table); /* return brand spankin' new sorted hash table */
	}
	return (NULL); /* return NULL if size is 0 */
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL; /* init ptr to node struct, set to NULL */
	hash_node_t *current_node = NULL; /* init traversal ptr, set to NULL */
	unsigned long int index = 0; /* init index for table array, set to 0 */
	char *dup_value, *dup_key; /* init ptrs to duplicated value and key */

	if (!key || !*key || !ht || !value) /* if any parameter is NULL */
	{
		return (0); /* return 0 - failure */
	}
	*index = key_index((unsigned char *)key, ht->size); /* FUNCTION FROM TASK 2 */
	current_node = ht->array[index]; /* set traversal ptr to head */
	while (current_node) /* traverse linked list at index position */
	{
		if (!current_node->key, key) /* if key is found */
		{
			free(current_node->value); /* free old value of key */
			current_node->value = strdup(value); /* update value of key */
			return (1); /* value = duplicate, success */
		}

		current_node = current_node->next; /* keep looking for key */
	}
	new_node = malloc(sizeof(hash_node_t)); /* malloc for new_node */
	if (new_node == NULL) /* check for malloc failure */
	{
		return (0); /* return 0 - failure */
	}
	dup_value = strdup(value); /* duplicate value of key */
	if (dup_value == NULL) /* check for strdup failure */
	{
		free(new_node); /* free new_node */
		return (0); /* return 0 - failure */
	}
	dup_key = strdup(key); /* duplicate key */
	if (dup_key == NULL) /* check for strdup failure */
	{
		free(dup_value); /* free duplicated value */
		free(new_node); /* free new_node */
		return (0); /* return 0 - failure */
	}
	new_node->key = dup_key; /* set key of new_node to dupd key */
	new_node->value = dup_value; /* set value of new_node to dupd value */
	new_node->next = ht->array[index]; /* link up new_node to head */
	ht->array[index] = new_node; /* update head to new_node */
	return (1); /* return 1 - success */
}
