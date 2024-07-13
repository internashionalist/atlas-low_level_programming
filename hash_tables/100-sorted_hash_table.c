#include "hash_tables.h"

/* shash_table_create - creates a sorted hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created SORTED hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t)); /* malloc for struct */
	if (ht == NULL) /* if malloc fails */
		return (NULL); /* return NULL - failure */

	ht->size = size; /* set size of new_table to given size */
	ht->array = malloc(sizeof(shash_node_t *) * size); /* malloc array */
	if (ht->array == NULL) /* if malloc fails */
	{
		free(ht); /* free hash table */
		return (NULL); /* return NULL - failure */
	}
	ht->shead = NULL; /* NULLify head */
	ht->stail = NULL; /* NULLify tail */
	return (ht); /* return brand spankin new sorted hash table */
}

/* create_node - creates a new node
 * @key: key to add to node
 * @value: value to add to node
 *
 * Return: pointer to new node
 */

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));
	if (!new_node) /* if malloc fails */
		return (NULL); /* return NULL - failure */

	new_node->key = strdup(key); /* set key */
	new_node->value = strdup(value); /* set value */
	new_node->next = NULL; /* NULLify next */
	new_node->sprev = NULL; /* NULLify prev */
	new_node->snext = NULL; /* NULLify next */

	return (new_node); /* return new node */
}

/* insert_node - inserts a node into a sorted linked list
 * @ht: pointer to the sorted hash table
 * @new_node: pointer to the node to insert
 *
 * Return: void
 */

void insert_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current; /* traversal node */

	if (ht->shead == NULL) /* if list is empty */
	{
		ht->shead = new_node; /* set head and tail to new node */
		ht->stail = new_node;
	}
	else if (strcmp(new_node->key, ht->shead->key) < 0) /* insert at head */
	{
		new_node->snext = ht->shead; /* set new node's next to head */
		ht->shead->sprev = new_node; /* set head's prev to new node */
		ht->shead = new_node; /* set head to new node */
	}
	else /* insert in middle or at tail */
	{
		current = ht->shead; /* set current to head */
		while (current->snext && strcmp(new_node->key, current->snext->key) > 0)
			current = current->snext; /* traverse list */

		new_node->snext = current->snext; /* set new node's next to current's next */
		new_node->sprev = current; /* set new node's prev to current */

		if (current->snext == NULL)	/* insert at tail */
			ht->stail = new_node; /* set tail to new node */
		else
			current->snext->sprev = new_node; /* set next node's prev to new node */

		current->snext = new_node; /* set current's next to new node */
	}
}
/* shash_table_set - adds an element to a sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: key to add
 * @value: value to add
 *
 * Return: 1 on success, 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index; /* index of array */
	shash_node_t *new_node, *current; /* new node and traversal node */

	if (!ht || !key || !value || *key == '\0') /* if hash table or key is NULL */
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size; /* TASK 2 */
	current = ht->array[index];	/* set current to head of list */

	while (current) /* traverse list */
	{
		if (strcmp(current->key, key) == 0) /* if key is found */

		{
			free(current->value); /* free current value */
			current->value = strdup(value); /* set new value */
			return (1); /* return success */
		}
		current = current->next; /* traverse list */
	}

	new_node = create_node(key, value); /* create new node */
	if (!new_node) /* if malloc fails */
		return (0); /* return failure */

	new_node->next = ht->array[index]; /* set new node's next to head */
	ht->array[index] = new_node; /* set head to new node */

	insert_node(ht, new_node); /* insert new node into sorted list */

	return (1); /* return success */
}

/* shash_table_get - retrieves a value associated with a key
 * @ht: pointer to the sorted hash table
 * @key: key to search for
 *
 * Return: value associated with key, or NULL if key not found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index; /* index of array */
	shash_node_t *node; /* traversal node */

	if (!ht || !key || *key == '\0') /* if hash table or key is NULL */
		return (NULL); /* return NULL */

	index = hash_djb2((const unsigned char *)key) % ht->size; /* TASK 1 */
	node = ht->array[index]; /* set node to head of list */

	while (node) /* traverse list */
	{
		if (strcmp(node->key, key) == 0) /* if key is found */
			return (node->value); /* return value */
		node = node->next; /* or keep on movin */
	}

	return (NULL); /* return NULL if key not found */
}

/* shash_table_print - prints a sorted hash table
 * @ht: pointer to the sorted hash table
 *
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node; /* traversal node */

	if (!ht) /* if hash table is NULL */
		return; /* return */

	node = ht->shead; /* set node to head of sorted list */
	printf("{"); /* print opening brace */
	while (node) /* traverse list */
	{
		printf("'%s': '%s'", node->key, node->value); /* print key and value */
		node = node->snext; /* move to next node */
		if (node) /* if not at end of list */
			printf(", "); /* print comma */
	}
	printf("}\n"); /* print closing brace */
}

/* shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: pointer to the sorted hash table
 *
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node; /* traversal node */

	if (!ht) /* if hash table is NULL */
		return; /* return */

	node = ht->stail; /* set node to tail */
	printf("{"); /* print opening brace */
	while (node) /* traverse list */
	{
		printf("'%s': '%s'", node->key, node->value); /* print key and value */
		node = node->sprev; /* move to previous node */
		if (node) /* if not at beginning of list */
			printf(", "); /* print comma */
	}
	printf("}\n"); /* print closing brace */
}

/* shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the sorted hash table
 *
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i; /* index */
	shash_node_t *node, *tmp; /* traversal node and temp node */

	if (!ht) /* if hash table is NULL */
		return; /* return */

	for (i = 0; i < ht->size; i++) /* traverse array */
	{
		node = ht->array[i]; /* set node to head of list */
		while (node) /* traverse list */
		{
			tmp = node; /* set tmp to node */
			node = node->next; /* move to next node */
			free(tmp->key); /* free key */
			free(tmp->value); /* free value */
			free(tmp); /* free node */
		}
	}

	free(ht->array); /* free array */
	free(ht); /* free hash table */
}
