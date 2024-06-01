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
	int i;
	int k;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		;
	}

	while (*(src + k) != '\0' && k < n)
	{
		*(dest + i) = *(src + k);
		i++;
		k++;
	}

	*(dest +i) = '\0';

	return (dest);
}

