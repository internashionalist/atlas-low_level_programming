#include "main.h"

/**
 * _strcpy - copies one string to another string
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
