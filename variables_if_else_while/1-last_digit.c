#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = (n % 10);
	printf("Last digit of %d is %d ", n, z);
	if (z > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (z < 6 && z != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else (z == 0)
	{
		printf("and is 0\n", n);
	}
	return (0);
}
