#include "main.h"

/**
 * _atoi - converts string to an integer.
 * @s: string being converted
 *
 * Return: integer result of conversion
 */

int _atoi(char *s)
{
	int sign = 1; /* determines if final integer is pos or neg */
	unsigned int n = 0; /* holds converted number */

	do { /* loop iterates over each char of string s points to until end of str */
		if (*s == '-')
			sign *= -1; /* flips sign if neg */
		else if (*s >= 48 && *s <= 57) /* checks if digit */
			n = (n * 10) + (*s - 48); /* adds left-shifted integer to n */
		else if (n > 0) /* if not digit or 0, breaks loop */
			break;
	} while (*s++); /* moves to next char */

	return (n * sign); /* returns n*sign, which is pos or neg depending on str */
}
