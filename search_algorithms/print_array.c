#include "search_algos.h"

/**
 * print_array - prints integer array in specific format
 * @array: array of integers
 * @left: starting index to be printed
 * @right: ending index to be printed
 */
void print_array(int *array, size_t left, size_t right)
{
       size_t i; /* index */

       printf("Searching in array: "); /* print array */
       for (i = left; i <= right; i++)
       {
              if (i != left)
                     printf(", ");
              printf("%d", array[i]);
       }
       printf("\n");
}
