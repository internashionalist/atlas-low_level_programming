#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed into it
 * @argc: arguments
 * @argv: strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /* uses argv */
	printf("%d\n", argc - 1); /* prints number of args */

	return (0); /* returns 0 on sucess */
}
