#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 * @s: pointer to checked string
 * @accept: pointer to string with accepted characters
 *
 * Return: number of bytes from accept found in s
 * 
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len; /* will be length where byte is found */
	unsigned int k; /* accept counter */

		for (len = 0; *(s + len) != '\0'; len++) /* loop through s */
		{
			for (k = 0; *(accept + k) != '\0'; k++) /* loop through accept */

}
