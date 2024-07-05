#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: unsigned long int being printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1) /* if n is greater than 1 */
	{
		print_binary(n >> 1); /* shift n to the right */
	}

	_putchar((n & 1) + '0'); /* print n and add '0' */
}
