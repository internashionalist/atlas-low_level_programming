#include "main.h"

/**
 * _puts_recursion - prints a string + \n
 * @s: iterated string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* if pointed-to char is null byte */
	{
		_putchar('\n'); /* print new line */
		return;
	}

	else /* else if char is NOT end of string */
	{
		_putchar(*s); /* print char */
		_puts_recursion(s + 1); /* then continue recursively through string */
	}
}
