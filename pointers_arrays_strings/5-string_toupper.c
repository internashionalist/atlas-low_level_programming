#include "main.h"

/**
* string_toupper - converts lowercase chars to uppercase
* @str: string to be converted
*
* Return: converted string
*/

char *string_toupper(char *str)
{
	int i; /* initialize string counter */

	while (i = 0; *(str + i) != '\0') /* set to 0, iterate through str */
	{
		if (*(str + i) >= 97 && *(str + i) <= 122) /* find lowercase chars */
		{
			*(str + i) -= 32; /* convert to uppercase */
		}

		i++; /* increment through string */
	}

	return (str); /* return uppercase string */
}
