#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an integer array
 * @a: integer array
 * @n: printed number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
		{
			printf(", ");
		}

	}
	printf("\n");
}
