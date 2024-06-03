#include "main.h"

/**
 * * _strstr - locates a substring within a string
 * @haystack: string searched
 * @needle: substring searched for
 *
 * Return: pointer to beginning of substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i; /* haystack counter */
	unsigned int k; /* needle counter */

	if (*needle == '\0') /* if needle string not found */
	{
		return (haystack); /* return haystack */
	}

	for (i = 0; haystack[i] != '\0'; i++) /* loop through haystack */
	{
		for (k = 0; needle[k] != '\0'; k++) /* loop through needle */
		{
			if (haystack[i + k] != needle[k]) /* if nothing matches */
			{
				break; /* break loop */
			}

			if (needle[k + 1] == '\0') /* once counter hits end of needle */
			{
				return &haystack[i]; /* return beginning position */
			}
		}
	}

	return (0); /* otherwise return NULL */
}
