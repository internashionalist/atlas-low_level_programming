#include "main.h"

/**
 * create_array - creates array using chars, initializes with specific char
 * @size: size of array
 * @c: specific char that initializes, fills array
 *
 * Return: pointer to the array on success, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
