#include "main.h"

/**
 **_strpbrk - searches a string for any of a given set of bytes
 * @s: pointer to string checked for bytes
 * @accept: pointer to string containing searched-for bytes
 *
 * Return: pointer to byte in s matching accept, or NULL if none found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i; /* s counter */
	unsigned int k; /* accept counter */

	for (i = 0; s[i] != '\0'; i++) /* fancy new format I just learned */
	{
		for (k = 0; accept[k] != '\0'; k++) /* loop through accept */
		{
			if (s[i] == accept[k]) /* if accept byte found in s */
			{
				return (s + i); /* return pointer to occurence */
			}
		}
	}

	return (0); /* or NULL if none found */
}
