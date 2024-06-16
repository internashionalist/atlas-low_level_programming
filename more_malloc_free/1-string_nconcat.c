#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - cats two strings in new allocation
 * @s1: concatenatee
 * @s2: concatenator
 * @n: bytes in second string
 *
 * Return: pointer to cat'd strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL) /* if NULL, treat as empty strings */
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	
