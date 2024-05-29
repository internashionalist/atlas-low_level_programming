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
	int i = 0;
	int j = 0;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

