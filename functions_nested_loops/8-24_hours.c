#include "main.h"

/**
 * jack_bauer - prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int HR;
	int MIN;

	for (HR = 0; HR <= 23; HR++)
	{
		for (MIN = 0; MIN <= 59; MIN++)
		{
			_putchar((HR / 10) + '0');
			_putchar((HR % 10) + '0');
			_putchar(':');
			_putchar((MIN / 10) + '0');
			_putchar((MIN % 10) + '0');
			_putchar(\n);
		}
	}
}
