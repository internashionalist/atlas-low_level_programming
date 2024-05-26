#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer given to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0 && n > -2147483648)
	{
		n = -(n);
		_putchar('-');
	}

	if (n / 10)
		print_number(n / 10);

	if (n == -2147483648)
		_putchar((n % 10) + 64);

	else
		_putchar((n % 10) + '0');
}
