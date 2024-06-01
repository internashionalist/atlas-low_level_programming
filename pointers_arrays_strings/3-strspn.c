#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 * @s: pointer to checked string
 * @accept: pointer to string with accepted characters
 *
 * Return: number of bytes from accept string in s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count; /* length of byte counter */
	unsigned int i; /* byte counter */
	unsigned int k; /* accept counter */

		for (i = 0; *(s + i) != '\0'; i++) /* loop through s */
		{
			for (k = 0; *(accept + k) != '\0'; k++) /* loop through accept */
			{
				if (*(s + count) == *(accept + k)) /* search for accept byte in s */
				{
					count++; /* count increment */
					break; /* stop counting */
				}
			}
		}

	return (count); /* number of bytes from accept found in s */
}
