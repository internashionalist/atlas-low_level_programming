/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number as a string
 *
 * Return: converted binary number as int or 0 if b is NULL, 0, or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (!b) /* if b is NULL */
	{
		return (0); /* return 0 */
	}

	while (*b) /* b not NULL */
	{
		if (*b != '0' && *b != '1') /* b not 0 or 1 */
		{
			return (0); /* return 0 */
		}

		uint = uint * 2 + (*b++ - '0'); /* THIS TOOK FOREVER */
	}

	return (uint); /* return converted binary number */
}
