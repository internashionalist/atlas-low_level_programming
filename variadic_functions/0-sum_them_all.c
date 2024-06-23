#include "variadic_functions.h"

/**
 * sum_them_all - finds sum of all parameters
 * @n: numbers of parameters
 *
 * Return: sum of parameters, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums; /* init arg list */
	unsigned int i; /* iterator */
	int sum = 0;

	if (n == 0) /* if no args */
	{
		return (0);
	}

	va_start(nums, n); /* inits var list with first arg n */

	for (i = 0; i < n; i++) /* iterate through var args */
	{
		sum += va_arg(nums, int); /* retrieves next arg, adds to sum */
	}

	va_end(nums); /* clean up */

	return (sum); /* return arg sum */
}
