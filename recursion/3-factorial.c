#include "main.h"

/**
 * factorial - finds factorial of n
 * @n: integer of which to find factorial
 *
 * Return: factorial, or -1 on error
 */

int factorial(int n)
{
	if (n < 0) /* BASE */
	{
		return (-1); /* error indication */
	}

	if (n == 0) /* BASE */
	{
		return (1); /* factorial of 0 */
	}

	return (n * factorial(n - 1)); /* CALL - return factorial */
}
