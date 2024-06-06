#include "main.h"

/**
 * _sqfinder - differentiates natural roots from approximates
 * @maybe: maybe natural root, maybe not
 * @perfect: perfect square
 *
 * Return: maybe if natural square root, -1 if not
 */

int _sqfinder(int maybe, int perfect)
{
	if ((maybe * maybe) == perfect) /* if approximate is NATURAL ROOT */
	{
		return (maybe); /* return that */
	}

	if ((maybe * maybe) > perfect) /* if NOT */
	{
		return (-1); /* return error */
	}

	return (_sqfinder(perfect, maybe + 1)); /* recurse through, increment */
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

	if (n == 0) /* if 0 */
	{
		return (0); /* return 0 */
	}

	if (n == 1) /* if 1 */
	{
		return (1); /* wait why do I need this */
	}

	return (_sqfinder(n));
}
