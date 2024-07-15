#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created SORTED hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t)); /* malloc new table */

	if (ht == NULL) /* if malloc fails */
		return (NULL); /* return NULL - failure */

	ht->size = size; /* set size of new_table to given size */
	ht->array = malloc(sizeof(shash_node_t *) * size); /* malloc array */
	if (ht->array == NULL) /* if malloc fails */
	{
		free(ht); /* free hash table's memory */
		return (NULL); /* return NULL - failure */
	}
	ht->shead = NULL; /* NULLify sorted head to empty the table */
	ht->stail = NULL; /* NULLify sorted tail too */
	return (ht); /* return brand spankin new sorted hash table */
}

/**
 * create_node - helper function to create a new node
 * @key: key to add to node
 * @value: value to add to node
 *
 * Return: pointer to new node
 */

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t)); /* malloc new node */

	if (!new_node) /* if malloc fails */
		return (NULL); /* return NULL - failure */
	new_node->key = strdup(key); /* set key to given key */
	new_node->value = strdup(value); /* set value to given value */
	if (!new_node->key || !new_node->value) /* if strdup fails */
	{
		free(new_node->key); /* free key's memory */
		free(new_node->value); /* free value's memory */
		free(new_node); /* free new node's memory */
		return (NULL); /* return NULL - failure */
	}
	new_node->next = NULL; /* remove dangling pointers */
	new_node->sprev = NULL; /* this one too */
	new_node->snext = NULL; /* remove sorted pointer too */
	return (new_node); /* return fresh new node with key and value */
}

/**
 * insert_node - helper function to insert a node into a sorted hash table
 * @ht: pointer to sorted hash table
 * @new_node: pointer to new node being inserted
 *
 * Return: void
 */

void insert_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *trav_node; /* pointer to list traversal node */

	if (ht->shead == NULL) /* if list is empty */
	{
		ht->shead = new_node; /* set head and tail to new node */
		ht->stail = new_node;
	}
	else if (strcmp(new_node->key, ht->shead->key) < 0) /* if inserting at head */
	{
		new_node->snext = ht->shead; /* set new node's next to head */
		ht->shead->sprev = new_node; /* set head's prev to new node */
		ht->shead = new_node; /* make new node the head */
	}
	else /* if inserting in middle or at tail */
	{
		trav_node = ht->shead; /* set trav_node to head */
		while (trav_node->snext && strcmp(new_node->key, trav_node->snext->key) > 0)
			trav_node = trav_node->snext; /* traverse list until insertion point */
		new_node->snext = trav_node->snext; /* new node's next to trav_node's next */
		new_node->sprev = trav_node; /* set new node's prev to trav_node */
		if (trav_node->snext == NULL) /* if inserting at tail */
			ht->stail = new_node; /* set tail to new node */
		else
			trav_node->snext->sprev = new_node; /* set next node's prev to new node */
		trav_node->snext = new_node; /* then trav_node's next to new node */
	}
}
/**
 * shash_table_set - adds an element to a sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: key to add
 * @value: value to add
 *
 * Return: 1 on success, 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index; /* index iterator */
	shash_node_t *new_node; /* pointer to new node */
	shash_node_t *trav_node; /* pointer to list traversal node */

	if (!ht || !key || !value || *key == '\0') /* if anything's missing */
		return (0); /* return 0 - failure */
	index = hash_djb2((const unsigned char *)key) % ht->size; /* generate index */
	trav_node = ht->array[index]; /* point traveral node to head */
	while (trav_node) /* traverse list */
	{
		if (strcmp(trav_node->key, key) == 0) /* if key is found */
		{
			free(trav_node->value); /* free old trav_node value */
			trav_node->value = strdup(value); /* set value to given value */
			return (1); /* return 1 - success */
		}
		trav_node = trav_node->next; /* or traverse until key found */
	}
	new_node = create_node(key, value); /* create new node using key and value */
	if (!new_node) /* if create_node fails */
		return (0); /* return 0 - failure */
	new_node->next = ht->array[index]; /* set new node's next to head node */
	ht->array[index] = new_node; /* set head to new node */
	insert_node(ht, new_node); /* insert new node into sorted list */
	return (1); /* return 1 - success */
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to the sorted hash table
 * @key: key to search for
 *
 * Return: value associated with key, or NULL if key not found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index; /* index position */
	shash_node_t *trav_node; /* pointer to list traversal node */

	if (!ht || !key || *key == '\0') /* if there's no hash table or key */
		return (NULL); /* return NULL */
	index = hash_djb2((const unsigned char *)key) % ht->size; /* generate index */
	trav_node = ht->array[index]; /* set traveral node to head */
	while (trav_node) /* traverse list */
	{
		if (strcmp(trav_node->key, key) == 0) /* if key is found */
			return (trav_node->value); /* return key's value */
		trav_node = trav_node->next; /* or keep on movin */
	}
	return (NULL); /* return NULL if key not found */
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: pointer to the sorted hash table
 *
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *trav_node; /* pointer to list traversal node */

	if (!ht) /* if there's no hash table */
		return; /* return nothing */
	trav_node = ht->shead; /* point trav_node to head */
	printf("{"); /* print opening brace */
	while (trav_node) /* traverse list */
	{
		printf("'%s': '%s'", trav_node->key, trav_node->value);
		trav_node = trav_node->snext; /* move traversal pointer to next node */
		if (trav_node) /* if not at end of list */
			printf(", "); /* print comma and space */
	}
	printf("}\n"); /* print closing brace */
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: pointer to the sorted hash table
 *
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *trav_node; /* pointer to list traversal node */

	if (!ht) /* if there's no hash table */
		return; /* return nothing */

	trav_node = ht->stail; /* place trav_node at tail */
	printf("{"); /* print opening brace */
	while (trav_node) /* traverse list */
	{
		printf("'%s': '%s'", trav_node->key, trav_node->value);
		trav_node = trav_node->sprev; /* move backwards to previous node */
		if (trav_node) /* if not at head yet */
			printf(", "); /* print comma */
	}
	printf("}\n"); /* print closing brace */
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the sorted hash table
 *
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index; /* index iterator */
	shash_node_t *trav_node, *temp_node; /* pointers to traversal and storage nodes */

	if (!ht) /* if there's no hash table */
		return; /* return nothing */
	for (index = 0; index < ht->size; index++) /* traverse hash table array of buckets */
	{
		trav_node = ht->array[index]; /* place trav_node at head of bucket list */
		while (trav_node) /* traverse list */
		{
			temp_node = trav_node; /* store current node */
			trav_node = trav_node->next; /* move traversal pointer to next node */
			free(temp_node->key); /* free key's memory */
			free(temp_node->value); /* free value's memory */
			free(temp_node); /* free current node's memory */
		}
	}
	free(ht->array); /* free array's memory */
	free(ht); /* free hash table's memory */
}
