#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at a given index
 * @n: number to be modified
 * @index: index of bit being modified
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8) /* if index greater than 64 */
	{
		return (-1); /* return -1 */
	}

	*n &= ~(1 << index); /* set bit to '0' at index */

	return (1); /* return 1 */
}
