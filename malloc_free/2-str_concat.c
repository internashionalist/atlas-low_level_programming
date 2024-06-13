#include "main.h"

/**
 * str_concat - concatenates two strings, new location
 * @s1: concatenatee
 * @s2: concatenator
 *
 * Return: pointer to new space with both strings
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0; /* iterator */
	int s1size = 0; /* string 1 size counter */
	int s2size = 0; /*string 2 size counter */
	char *str = NULL;

	if (s1 == NULL) /* if not present */
	{
		s1size = 0; /* count as zero */
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++) /* iterate, count */
		{
			s1size++;
		}
	}

	if (s2 == NULL) /* same with second string */
	{
		s2size = 0;
	}

	else
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			s2size++;
		}
	}
}
