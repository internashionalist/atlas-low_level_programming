#include "main.h"

/**
 * cap_string - Capitalizes Each Word In A String
 * @str: Pointer To String To Be Capitalized
 *
 * Return: String With Capitalized Words
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separator[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		for (j = 0; separator[j]; j++)
		{
