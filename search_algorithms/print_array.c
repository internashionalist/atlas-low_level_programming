#include "search_algos.h"

/**
 * print_array - prints integer array
 * @array: pointer to array of integers
 * @left: beginning index to be printed
 * @right: final index to be printed
 * 
 * Return: void
 */

void print_array(int *array, size_t left, size_t right)
{
       size_t i; /* index */

       printf("Searching in array: "); /* print array */
       for (i = left; i <= right; i++) /* iterate through array */
       {
              if (i != left) /* if not first element */
                     printf(", "); /* print comma and space */
              printf("%d", array[i]); /* print element */
       }
       printf("\n"); /* print newline */
}
