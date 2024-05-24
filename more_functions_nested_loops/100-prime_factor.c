#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long p = 612852475143, i;

	while (i < (p / 2))
	{
		if ((p % 2) == 0)
		{
			p /= 2;
			continue;
		}

		for (i = 3; i < (p / 2); i += 2)
		{
			if ((p % i) == 0)
				p /= i;
		}
	}

	printf("%ld\n", p);

	return (0);
}
