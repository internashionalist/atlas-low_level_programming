#include "main.h"

/**
 * _pow_recursion - returns x ^ y
 * @x: int raised
 * @y: int raised by
 *
 * Return: x ^ y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0) /* BASE - error */
	{
		return (-1); /* return error notification */
	}

	return (x * _pow_recursion(x, y - 1));
}
