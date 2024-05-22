#include "main.h"

/**
* more_numbers - prints digits 0-14 x10
*
* Return: 0
*/

void more_numbers(void)
{
	int i;
	int k;

	for (k = 0 ; k <= 9 ; k++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
		_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}
