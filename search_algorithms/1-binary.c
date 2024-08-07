#include "search_algos.h"

/* binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array being searched
 * @size: number of elements in array
 * @value: value being searched for
 *
 * Return: first index where value is located or -1 if value
 * not found / NULL array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0; /* left index */
	size_t right = size - 1; /* right index */
	size_t mid; /* middle index */

	if (array == NULL) /* if array is NULL */
		return (-1); /* indicate value not found */


