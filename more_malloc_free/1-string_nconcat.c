#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - cats one string and n bytes of another string
 * 			 in new allocation
 * @s1: concatenatee
 * @s2: concatenator
 * @n: bytes in second string being cat'd
 *
 * Return: pointer to cat'd strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len; /* length of s1 */
	unsigned int s2len; /* length of s2 */
	unsigned int i; /* iterator for s1 */
	unsigned int j; /* iterator for n of s2 */
	char *catstr; /* catd result */

	if (s1 == NULL) /* if NULL, treat as empty strings */
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1len = 0; s1[s1len] != '\0'; s1len++) /* measure s1 */
	{
		;
	}

	for (s2len = 0; s2[s2len] != '\0'; s2len++) /* measure s2 */
	{
		;
	}

	if (n >= s2len) /* cut n if bigger than s2 */
	{
		n = s2len;
	}

	catstr = (char *)malloc(s1len + n + 1); /* allocate memory + null */

	if (catstr == NULL) /* if it fails */
	{
		return (NULL);
	}

	for (i = 0; i < s1len; i++)
	{
		catstr[i] = s1[i]; /* copy s1 to catstr */
	}

	for (j = 0; j < n; j++) /* iterate until n */
	{
		catstr[i + j] = s2[j]; /* copy strings (n of s2) */
	}
	
	catstr[i + j] = '\0';

	return (catstr); /* return pointer to catd strings */
}

