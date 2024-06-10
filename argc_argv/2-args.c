#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: arguments
 * @argv: strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i; /* initialize iterator */

	for (i = 0; i < argc; i++) /* iterate through argc */
	{
		printf("%s\n", argv[i]); /* print arguments + \n */
	}

	return (0); /* success */
}
