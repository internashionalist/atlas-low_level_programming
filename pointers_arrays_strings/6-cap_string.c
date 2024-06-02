#include "main.h"

/**
 * cap_string - Capitalizes Each Word In A String
 * @str: Pointer To String To Be Capitalized
 *
 * Return: String With Capitalized Words
 */

char *cap_string(char *str)
{
	int i = 0; /* initialize iterator to 0 */

	while (str[i]) /* array format */
	{
		while (str[i] && !(str[i] >= 'a' && str[i] <= 'z')) /* skip lowercase chars */
		{
			i++; /* increment through str */
		}

		if /* if word separators found */
		((*s == ' ') ||
		(*s == '\t') ||
		(*s == '\n') ||
		(*s == ',') ||
		(*s == ';') ||
		(*s == '.') ||
		(*s == '!') ||
		(*s == '?') ||
		(*s == '"') ||
		(*s == '(') ||
		(*s == ')') ||
		(*s == '{'))
			{


	return (str - i);
}
