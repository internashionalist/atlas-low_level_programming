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
	return (_sqfinder(n, 1));
}
