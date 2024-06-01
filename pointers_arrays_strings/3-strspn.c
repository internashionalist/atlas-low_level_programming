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
	unsigned int count; /* byte counter */
	unsigned int k; /* accept counter */

		for (count = 0; *(s + count) != '\0'; count++) /* loop through s */
		{
			for (k = 0; *(accept + k) != '\0'; k++) /* loop through accept */
			{
				if (*(s + count) == *(accept + k)) /* search for first accept byte in s */
				{
					break; /* when found, stop searching */
				}
			}
		}
	
	return (count); /* number of bytes from accept found in s */
}
