#include "main.h"

/**
 * get_endianness - checks... <looks at notes> ..endianness?
 *
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int n; /* checks endianness */
	char *c; /* pointer to n's bytes */

	n = 1; /* set n to 1 */
	c = (char *)&n; /* set c to n's bytes */

	if (*c) /* if first byte of n is 1 */
	{
		return (1); /* little endian */
	}

	return (0); /* otherwise big endian */
}
