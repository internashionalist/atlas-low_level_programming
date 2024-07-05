/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number as a string
 *
 * Return: converted binary number as unsigned int or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (!b) /* if b is NULL */
	{
		return (0); /* return 0 */
	}

