#include "main.h"

/**
* reverse_array - reverses content of an array
* @a: string to be reversed
* @n: num of elements of the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int *begin = a; /* pointer to beginning of array */
	int *end = a + (n - 1); /* pointer to end of array */

	while (begin < end) /* while iterating through array */
	{
		int i = *begin; /* switches first and last */
		*begin = *end; /* then second and second to last */
		*end = i; /* all the way through until reversed */
		begin++;
		end--;
	}
} /* return is void */
