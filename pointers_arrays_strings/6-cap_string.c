#include "main.h"

/**
 * cap_string - Capitalizes Each Word In A String
 * @str: Pointer To String To Be Capitalized
 *
 * Return: String With Capitalized Words
 */

char *cap_string(char *str)
{
	int i = 0; /* initialize iterator */

	while (str[i]) /* loop through chars in string */
	{
		while (!(str[i] >= 'a' && str[i] <= 'z')) /* skip over lowercase letters */
		{
			i++; /* increment */
		}

		if (str[i - 1] == ' ' || /* if char BEFORE i is a separator */
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		i == 0) /* or if first character in string */
		{
			str[i] -= 32; /* capitalize i char */
		}
	}

	return (str); /* return string with capitalized chars */
}
