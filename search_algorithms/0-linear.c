#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * linear search algorithm
 * @array: pointer to the first element of the array being searched
 * @size: number of elements in array
 * @value: value being searched for
 *
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
