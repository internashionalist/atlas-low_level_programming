#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 * @s: pointer to checked string
 * @accept: pointer to string with accepted characters
 *
 * Return: length of first byte from accept found in s
 * 
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len; /* will return length where byte is found */
	unsigned int k; /* accept counter */

		for (len = 0; *(s + len) != '\0'; len++) /* loop through s */
		{
			for (k = 0; *(accept + k) != '\0'; k++) /* loop through accept */
			{
				if (*(s + len) == *(accept + k)) /* search for first accept byte in s */
				{
					break; /* when found, stop searching */
				}
			}
		}
	
	return (len); /* return length where accept byte was found */
}
