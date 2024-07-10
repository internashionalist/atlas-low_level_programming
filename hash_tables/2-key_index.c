#include "hash_tables.h"

/**
 * key_index - returns index of a key in hash table array
 * @key: key
 * @size: size of hash table array
 *
 * Return: index of the key in hash table array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key); /* convert key to int hash value */

	return (index % size); /* index = hash value % size of array */
}
