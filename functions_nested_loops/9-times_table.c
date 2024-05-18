#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *		in given format
 */

void times_table(void)
{
	int a, b, ab;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
			ab = a * b;
			if (ab <= 9)
				_putchar(' ');
			else
				_putchar((ab / 10) + '0');

			_putchar((ab % 10) + '0');
		}
		_putchar('\n');
	}
}
