#include "main.h"

/**
* string_toupper - converts lowercase chars to uppercase
* @str: string to be converted
*
* Return: converted string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}

		i++;
	}

	return (str);
}
