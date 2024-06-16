#include "main.h"

/**
 * _calloc - allocates memory for array of nmemb elements of size bytes each\
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}
