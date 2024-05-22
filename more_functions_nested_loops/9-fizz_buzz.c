#include <stdio.h>
#include "main.h"

/**
 * main - prints 1-100
 *	fizz for mult of 3
 *	buzz for mult of 5
 *	fizzbuzz for both
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 15  == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
			else if (i % 3 == 0)
			{
				printf("Fizz");
				printf(" ");
			}
			else if (i % 5 == 0 && i != 100)
			{
				printf("Buzz");
				printf(" ");
			}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
