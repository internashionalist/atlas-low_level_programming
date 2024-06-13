#include "main.h"

/**
 * _strdup - returns pointer to newly-allocated space
 *		with copy of string
 * @str: str to be copied, used as parameter
 *
 *
 * Return: pointer to new paramater
 *
 */

char *_strdup(char *str)
{
	unsigned int i = 0; /* iterator */
	unsigned int length = 0; /* length counter */
	char *strcopy /* copied string */

	if (str == NULL) /* if string absent */
	{
		return (NULL);
	}

	while (str[length] != '\0') /* count length */
	{
		length++;
	}

	strcopy = malloc(sizeof(char) * (length + 1)); /* allocate size, include null */

	if (strcopy == NULL) /* if failed */
	{
		return (NULL);
	}

}
