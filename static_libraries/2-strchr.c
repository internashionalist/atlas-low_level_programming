#include "main.h"

/**
 * _strchr - locates character in given string
 * @s: string being checked
 * @c: character checked for
 *
 * Return: pointer to first occurrence of c  or NULL if no c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) >= '\0'; i++) /* iterate through s */
	{
		if (*(s + i) == c) /* check characters for c */
		{
			return (s + i); /* if found, return position */
		}
	}

	return ('\0'); /* otherwise return NULL */
}
