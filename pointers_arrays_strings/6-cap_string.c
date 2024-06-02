#include "main.h"

/**
 * cap_string - Capitalizes Each Word In A String
 * @str: Pointer To String To Be Capitalized
 *
 * Return: String With Capitalized Words
 */

char *cap_string(char *str)
{
	int i; /* initialize iterator */

	for (i = 0; str[i]; i++) /* iterate through string */
	{
		if /* if character BEFORE i is a separator */
		(i == 0 ||
		 str[i - 1] == ' ' ||
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
		 str[i - 1] == '{'
		 && (str[i] >= 'a') && (str[i] <= 'z')) /* and i is lowercase */
		{
			str[i] -= 32; /* capitalize i char */
		}
	}

	return (str); /* return string with capitalized chars */
}
