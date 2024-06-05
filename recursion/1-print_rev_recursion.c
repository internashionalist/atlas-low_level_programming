#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string being reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0') /* BASE - stops at null byte */
	{
		_print_rev_recursion(s + 1); /* RECURSIVE CALL - move to next char  */
		_putchar(*s); /* print reversed string */
	}
}
