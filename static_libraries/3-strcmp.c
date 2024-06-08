#include "main.h"

/**
* _strcmp - compares two strings
* @s1: string one
* @s2: string two
*
* Return: comparison results
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0; /* initialize and set counter to 0 */

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0') /* compare strings */
	{
		if (*(s1 + i) != *(s2 + i)) /* if strings have differences */
		{
			return (*(s1 + i) - *(s2 + i)); /* return comparison */
		}

		i++; /* increment counter */
	}

	return (0); /* hope theyre the same length */
}

