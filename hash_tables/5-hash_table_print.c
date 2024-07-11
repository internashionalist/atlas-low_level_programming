#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table in order of array
 * @ht: hash table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
       hash_node_t *node = NULL; /* traversal ptr for nodes */
       unsigned long int iterator; /* iterator for array */

       if (ht == NULL) /* if hash table is NULL */
               return; /* return nothing, print nothing */

       for (iterator = 0; iterator < ht->size; iterator++) /* traverse array */
       {
       {
