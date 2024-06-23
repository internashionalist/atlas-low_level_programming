#include "variadic_functions.h"

/**
 * print_numbers - prints numbers + \n
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums; /* init list */
	unsigned int i; /* index iterator */

	if (n == 0) /* if no ints */
	{
		printf("\n");
		return; /* dont print */
	}

	va_start(nums, n); /* init list with n */

	for (i = 0; i < n; i++) /* iterate through variadic args */
	{
		printf("%d", va_arg(nums, int)); /* retrieve and print ints */

		if (i != (n - 1) && separator != NULL) /* if not last or NULL */
		{
			printf("%s", separator); /* print separator */
		}
	}

	va_end(nums); /* clean up */

	printf("\n"); /* print new line */
}
