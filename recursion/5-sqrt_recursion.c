#include "main.h"

/**
 * _sqrt_recursion - finds an integers natural square root
 * @n: given int
 *
 * Return: natural sqare root of integer
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (-1);
	}

	if (n > 0)
	{
		return (-1);
	}

	return (n * _sqrt_recursion(n - 1));
}
