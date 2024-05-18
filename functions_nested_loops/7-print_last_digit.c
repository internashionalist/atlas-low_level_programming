#include "main.h"

/**
 * print_last_digit - prints last digit of a given number
 * @i: number input
 *
 * Return: last digit integer
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
		j *= -1;

	_putchar(j + '0');

	return (j);
}
