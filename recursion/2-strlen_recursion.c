#include "main.h"

/**
 * _strlen_recursion - measures the length of a string
 * @s: string measured
 *
 * Return: length of string or 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /* BASE - if null reached */
	{
		return (0); /* return 0 */
	}

	else
	{
		return (1 + _strlen_recursion(s + 1)); /* CALL - return length */
	}
}
