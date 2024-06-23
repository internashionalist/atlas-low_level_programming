#include "variadic_functions.h"

/**
 * print_strings - prints strings + \n
 * @separator: string printed between strings
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *strings;

	if (n == '\0')
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		strings = va_arg(args, char *); /* retrieve strings */

		if (strings == NULL) /* if a string is NULL */
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strings);
		}

		if (i < n - 1 && separator != NULL) /* if not last */
		{
			printf("%s", separator); /* print sep */
		}
	}

	va_end(args);

	printf("\n");
}
