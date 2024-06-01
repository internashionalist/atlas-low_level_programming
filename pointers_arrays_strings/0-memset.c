#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area pointed to
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* counter */

	for (i = 0; i < n; i++) /* loops through until n */
	{
		*(s + i) = b; /* sets count char pointed to by s to char b */
	}

	return (s); /* returns pointer to mem area */

}
