#include "main.h"

/**
 * _memcpy - copies n bytes of memory area
 * @dest: pointer to copy destination
 * @src: pointer to source copied
 * @n: number of bytes copied
 *
 * Return: pointer to dest memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
