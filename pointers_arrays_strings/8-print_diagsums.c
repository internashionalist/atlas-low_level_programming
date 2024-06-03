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
	unsigned int sumleft = 0; /* sum going left */
	unsigned int sumright = 0; /* sum going right */
	unsigned int x; /* iterator through a */

	for (x = 0; x < size; x++)
	{
		sumleft += a[i * (size + 1)];
	}

