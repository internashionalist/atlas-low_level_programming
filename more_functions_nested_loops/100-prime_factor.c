#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)

{
	long long i = 612852475143;

	while (i % 2 == 0)
	{
		i /= 2;
	}

	for (long long k = 3; k * k <= num; k += 2)
	{
		while (i % k == 0)
	{
		i /= k;
	}
}
	printf("%lld\n", i);

	return (0);
}
