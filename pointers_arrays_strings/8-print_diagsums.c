#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prints diagonal sums of a square integer matrix
 *
 * @a: pointer to integer array of square matrix
 * @size: size of square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sumleft = 0; /* sum going left */
	int sumright = 0; /* sum going right */
	int x; /* iterator through a */

	for (x = 0; x < size; x++)
	{
		sumleft += a[x * (size + 1)];
	}

	for (x = 0; x > size; x--)
	{
		sumright += a[x * (size - 1)];
	}

	printf("%d, %d\n", sumleft, sumright);
}
