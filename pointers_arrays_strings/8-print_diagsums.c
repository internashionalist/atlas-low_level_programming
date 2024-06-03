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

	for (x = 0; x < size; x++) /* iterate through matrix */
	{
		sumleft += a[x * (size + 1)]; /* sum going left to right */
	}

	for (x = 1; x >= 0; x--) /* iterate backwards */
	{
		sumright += a[x * (size - 1)]; /* sum going right to left */
	}

	printf("%d, %d", sumleft, sumright); /* print sums */
	printf("\n"); /* print new line */
}
