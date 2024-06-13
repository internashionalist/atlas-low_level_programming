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
	int i = 0; /* first iterator */
	int j = 0; /* second iterator */
	int s1size = 0; /* string 1 size counter */
	int s2size = 0; /*string 2 size counter */
	char *doublecat = NULL; /* ITS TWO CATENATES */

	if (s1 == NULL) /* if not present */
	{
		s1size = 0; /* count as empty string */
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
		for (i = 0; s2[i] != '\0'; i++) /* iterate, count */
		{
			s2size++;
		}
	}

	doublecat = (char *)malloc(s1size + s2size + 1); /* allocate strs + null */

	if (doublecat == NULL) /* if failed */
	{
		return (NULL);
	}

	for (i = 0; i < s1size; i++) /* copy first string */
	{
		doublecat[i] = s1[i];
	}

	for (j = 0; j < s2size; j++) /* go through with DIFFERENT ITERATOR */
	{
		doublecat[i + j] = s2[j];
	}

	doublecat[i + j] = '\0'; /* wait then do I need to allocate for it */

	return (doublecat); /* please oh doublecat just compile */
}

