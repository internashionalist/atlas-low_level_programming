#include "main.h"

/**
* print_line - draws a 'line' n times
* @n: number of _s to print
*
* Return: 0
*/

void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0 ; l < n ; l++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
