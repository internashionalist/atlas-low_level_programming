#include "main.h"

/**
* leet - makes strings more leet
* @str: string of standard spelling
*
* Return: leet string
*/

char *leet(char *str)
{
	int i = 0; /* str iterator */
	int j; /* standard and leet iterator */
	char standard[] = "AaEeOoTtLl"; /* chars to be made leet */
	char leet[] = "4433007711"; /* improved leet chars */

	while (*(str + i)) /* while within string before null */
	{
		for (j = 0; *(standard + j); j++) /* iterate through standard array */
		{
			if (*(str + i) == *(standard + j)) /* if standar chars found in str */
			{
				*(str + i) = *(leet + j); /* make em leet */
			}
		}

		i++; /* increment through str */
	}

	return (str); /* return leetified str */
}

