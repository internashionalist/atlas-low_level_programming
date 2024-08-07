#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array being searched
 * @size: number of elements in array
 * @value: value being searched for
 *
 * Return: first index where value is located or -1 if value
 * not found / NULL array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i; /* index */

	if (array == NULL) /* if array is NULL */
		return (-1); /* indicate value not found */

	for (i = 0; i < size; i++) /* iterate through array */
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value) /* if value is found */
			return (i); /* return index where found */
	}

	return (-1); /* otherwise indicate value not found */
}
