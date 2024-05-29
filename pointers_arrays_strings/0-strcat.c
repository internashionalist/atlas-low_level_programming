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
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
