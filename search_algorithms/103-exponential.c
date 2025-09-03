#include "search_algos.h"

/**
 * exponential_search -	searches for a value in a sorted array
 * @array:				pointer to first element of array being searched
 * @size:				number of elements in array
 * @value:				value to search for
 *
 * Return:				index of value if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t min, high, idx;				/* lower, upper, absolute bounds */
	int rel;							/* relative index from binarysearch */

	if (!array || !size)							/* NULL/empty checks */
		return (-1);

	if (value == array[0])							/* check first element */
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	/* exponential stepping: powers of 2 */
	for (min = 1; min < size && value > array[min]; min *= 2)
	{
		printf("Value checked array[%lu] = [%d]\n",
			   (unsigned long)min, array[min]);		/* current index */

		/* check for bounds */
		if (value == array[min] || min * 2 > size - 1 ||
			(value > array[min] && value < array[SMALL(min * 2, size - 1)]))
			break;
	}

	high = SMALL(min * 2, size - 1);				/* upper bound */

	printf("Value found between indexes [%lu] and [%lu]\n",
		   (unsigned long)min, (unsigned long)high);

	/* find the exact index using binary search */
	rel = binary_search(array + min, high - min + 1, value);
	if (rel == -1)
		return (-1);

	idx = min + (size_t)rel;						/* absolute index */

	while (idx > 0 && array[idx - 1] == value)		/* duplicate check */
		idx--;

	return ((int)idx);								/* return first index */
}

/**
 * binary_search -	searches for a value in a sorted array of integers
 * @array:			pointer to the first element of the array being searched
 * @size:			number of elements in array
 * @value:			value being searched for
 *
 * Return:			first index where value is located or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;						/* left index */
	size_t right = size - 1;				/* right index */
	size_t mid;								/* middle index */

	if (array == NULL)						/* NULL check */
		return (-1);

	while (left <= right)					/* iterate through array */
	{
		print_array(array, left, right);	/* print array */
		mid = (left + right) / 2;			/* calculate middle index */
		if (array[mid] < value)				/* if value is in right half */
			left = mid + 1;					/* move left index to mid */
		else if (array[mid] > value)		/* if value is in left half */
			right = mid - 1;				/* move right index to mid */
		else								/* if value is found */
			return (mid);					/* return index where found */
	}

	return (-1);							/* not found */
}

/**
 * print_array -	prints integer array
 * @array:			pointer to array of integers
 * @left:			beginning index to be printed
 * @right:			final index to be printed
 *
 * Return:			void
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;								/* index */

	printf("Searching in array: ");			/* print array */
	for (i = left; i <= right; i++)			/* iterate through array */
	{
		if (i != left)						/* if not first element */
			printf(", ");					/* print comma and space */
		printf("%d", array[i]);				/* print element */
	}
	printf("\n");							/* print newline */
}
