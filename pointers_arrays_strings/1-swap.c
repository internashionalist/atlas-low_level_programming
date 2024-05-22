#include "main.h"

/**
* swap_int - swaps values of two integers
* @a: swapper
* @b: swappee
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
