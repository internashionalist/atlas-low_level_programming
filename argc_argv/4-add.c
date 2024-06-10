#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds two postive numbers
 * @argc: arguments
 * @argv: strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum = 0;

	if (argc < 2) /* if program doesnt have enough args to run */
	{
		printf("0\n"); /* print 0 and \n */

		return (0);
	}

	else
	{
		for (a = 1; a < argc; a++) /* got help, made args into iterators */
		{
			for (b = 0; argv[a][b] != '\0'; b++) 
			{
				if (argv[a][b] < '0' || argv[a][b] > '9') /* if neg or non-digit */
				{
					printf("Error\n");

					return (1);
				}
			}

		sum += atoi(argv[a]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
