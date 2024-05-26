#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	int digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n > 0)
	{
		digit = n % 10;
		n /= 10;
	
	_putchar(digit + '0');
	}
}
