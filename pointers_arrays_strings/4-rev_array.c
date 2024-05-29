#include "main.h"

/**
* reverse_array - reverses content of an array
* @a: string to be reversed
* @n: num of elements of the array
*
* Return: Always 0
*/

void reverse_array(int *a, int n)
{
	int *begin = a;
	int *end = a + (n - 1);
	int i = *begin;

	while (begin < end)
	{
		*begin = *end;
		*end = i;
		begin++;
		end--;
	}
}


