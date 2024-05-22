#include "main.h"

/**
* print_numbers - prints digits 0-9 plus new line
*
* Return: 0
*/

void print_numbers(void)
{
	char c

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
