#include "main.h"

/**
 * _sqrt_recursion - finds an integers natural square root
 * @n: given int
 *
 * Return: natural sqare root of integer
*/

int _sqrt_recursion(int n)
{
	if (n < 0) /* if negative */
	{
		return (-1); /* no natural root */
	}

	else if (n == 0) /* if 0 */
	{
		return (0); /* return 0 */
	}

	else if (n == 1) /* if 1 */
	{
		return (1); /* wait why do I need this */
	}

	return (n * _sqrt_recursion(n - 1));
}
