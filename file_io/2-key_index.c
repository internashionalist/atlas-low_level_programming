#include "hash_tables.h"

/**
 * key_index - returns index of a key
 * @key: key
 * @size: size of the hash table array
 *
 * Return: index of the key in hash table array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{