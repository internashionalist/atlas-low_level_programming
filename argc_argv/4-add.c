#include <stdio.h>
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
