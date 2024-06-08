#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination string
* @src: source string
* @n: byte number able to be copied in src
*
* Return: destination string
*/

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
