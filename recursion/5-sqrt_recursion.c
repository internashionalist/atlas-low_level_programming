#include "main.h"

/**
 * _sqfinder - differentiates natural roots from approximates
 * @maybe: maybe natural root, maybe not
 * perfect: perfect square
 *
 * Return: maybe if natural square root, -1 if not
 */

int _sqfinder(int maybe, int perfect)
{
	if ((maybe * maybe) == perfect)
	{
		return (maybe);
	}

/**
 * _sqrt_recursion - finds an integers square root
 * @n: given int
 *
 * Return: sqare root of integer
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
