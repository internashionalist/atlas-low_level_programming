#include "main.h"

/**
* print_triangle - prints a triangle of hash marks
* @size: specifies size of triangle
* Return: 0
*/

void print_triangle(int size)
{
	int i;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
			{
				if (i + j <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
