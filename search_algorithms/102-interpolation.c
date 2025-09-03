#include "search_algos.h"

/**
* interpolation_search -	searches for a value in a sorted array
* @array:					pointer to first element of array being searched
* @size:					number of elements in array
* @value:					value to search for
*
* Return:					index of value if found, otherwise -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, guess;

	if (!array || !size)						/* NULL/empty checks */
		return (-1);

	low = 0;									/* lower bound */
	high = size - 1;							/* upper bound */
	guess = 0;									/* best guess */

	for (guess = CALC(array, low, high, value);	/* initial guess */
		 low < high && value >= array[low] && value <= array[high];
		 guess = CALC(array, low, high, value))	/* update guess */

	{
		printf("Value checked array[%lu] = [%d]\n", guess, array[guess]);

		if (array[guess] < value)				/* if less than */
			low = guess + 1;					/* increase lower bound */
		else if (array[guess] > value)			/* if greater than */
			high = guess - 1;					/* decrease upper bound */
		else
			return (guess);						/* found */
	}

	printf("Value checked array[%lu] is out of range\n", guess);

	return (-1);								/* not found */
}
