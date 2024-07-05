#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: number to be checked
 * @index: index of bit
 *
 * Return: value of bit at given index or -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8) /* if index greater than 64 */
	{
		return (-1); /* return -1 */
	}

	return ((n >> index) & 1); /* return value of bit at given index */
}
