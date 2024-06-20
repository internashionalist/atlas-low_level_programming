#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter
 *		on each element of an array
 * @array: input integer array
 * @size: size of array
 * @action: pointer to function used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
