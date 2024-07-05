#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: unsigned long int being printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}




