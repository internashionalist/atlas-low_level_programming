#include "main.h"

/**
 * main - Entry point - prints the alphabet in lowercase
 *	followed by a new line.
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
_putchar('\n');
}
