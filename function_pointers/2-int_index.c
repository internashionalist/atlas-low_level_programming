#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array being searched
 * @size: number of elements in array
 * @cmp: function to compare integers
 *
 * Return: result of search
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
	
