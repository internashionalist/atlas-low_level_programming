#include "main.h"

/**
* _strncat - concatenates two strings but can only use up to n bytes
* @dest: destination string
* @src: source string
* @n: number of bytes from source string
*
* Return: Always 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int i; /* dest counter */
	int k; /* src counter */

	for (i = 0; *(dest + i) != '\0'; i++) /* iterate through string until null byte */
	{
		;
	}

	while (*(src + k) != '\0' && k < n) /* iterate through src string until either n or null */
	{
		*(dest + i) = *(src + k); /* copies src to end of dest */
		i++;
		k++;
	}

	*(dest +i) = '\0'; /* stop copying at end of string */

	return (dest); /* return concatenated result */
}

