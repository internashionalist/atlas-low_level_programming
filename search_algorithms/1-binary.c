#include "search_algos.h"
#include "print_array.c"

/* 
 * binary_search - searches for a value in a sorted array of integers
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

	while (left <= right) /* iterate through array */
	{
		print_array(array, left, right); /* print array */
		mid = (left + right) / 2; /* calculate middle index */
		if (array[mid] < value) /* if value is in right half */
			left = mid + 1; /* move left index to mid */
		else if (array[mid] > value) /* if value is in left half */
			right = mid - 1; /* move right index to mid */
		else /* if value is found */
			return (mid); /* return index where found */
	}
	return (-1); /* otherwise indicate value not found */
}
