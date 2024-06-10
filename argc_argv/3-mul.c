#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: arguments
 * @argv: strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3) /* if != 3 args */
	{
		printf("Error\n"); /* print error and \n */

		return (1);
	}

	a = atoi(argv[1]); /* glad I learned atoi */
	b = atoi(argv[2]);

	printf("%d\n", (a * b));

	return (0);
}
