#include "main.h"

/**
 * _strcat - concatenates (a new word I know now) two strings + null byte
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i; /* dest counter */
	int k; /* src counter */

	for (i = 0; *(dest + i) != '\0'; i++) /* iterate through dest */
	{
		;
	}

	for (k = 0; *(src + k) != '\0'; k++, i++) /* iterate through src and dest */
	{
		*(dest + i) = *(src + k); /* copy src to dest */
	}

	return (dest); /* return copied string */
}
