#include "main.h"

/**
 * array_range - creates array of integers
 * @min: min of range
 * @max: max of range
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max) /* if min > max */
	{
		return (NULL);
	}

	size = (max - min) + 1; /* contain all integers */

	array = malloc(sizeof(int) * size); /* allocate */

	if (array == NULL) /* if malloc fails */
	{
		return (NULL);
	}

	for (i = 0; i < size; i++) /* iterate through */
	{
		array[i] = min++; /* increment */
	}

	return (array);
}
