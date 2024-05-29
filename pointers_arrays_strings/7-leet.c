#include "main.h"

/**
* leet - makes strings more leet
* @str: string of standard spelling
*
* Return: leet string
*/

char *leet(char *str)
{
	int i = 0, j;
	char standard[] = "AaEeOoTtLl";
	char leet[] = "4433007711";

	while (str[i])
	{
		for (j = 0; standard[j]; j++)
		{
			if (str[i] == standard[j])
			{
				str[i] = leet[j];
			}
		}

		i++;
	}

	return (str);
}

