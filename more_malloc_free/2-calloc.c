#include "main.h"

/**
 * _calloc - allocates memory for array of nmemb elements of size bytes each
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *memptr;
	
	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	memptr = malloc(nmemb * size);

	if (memptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		

	return (memptr);
