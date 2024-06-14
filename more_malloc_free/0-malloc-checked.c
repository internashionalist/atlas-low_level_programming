#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  allocates memory with malloc
 * @b: memory size
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b); /* allocates memory */

	if (b <= 0) /* if b is 0 or negative */
	{
		return (NULL);
	}

	if (a == NULL) /* if malloc fails */
	{
		exit(98);
	}

	return (a);
}
