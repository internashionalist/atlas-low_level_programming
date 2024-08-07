#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the first element of the array to print
 * @size: number of elements in array
 *
 * Return: void
 */

void print_array(const int *array, size_t size)
{
       size_t i = 0; /* index */

       while (array && i < size) /* iterate through array */
       {
              if (i > 0) /* if not first element */
                     printf(", "); /* print comma and space */
              printf("%d", array[i]); /* print element */
              i++; /* increment index */
       }
       printf("\n"); /* print newline */
}
