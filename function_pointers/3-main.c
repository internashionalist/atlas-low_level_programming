#include "3-calc.h"

/**
 * main - executes functions called
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 98 if argc incorrect, 99 if null operator,
 *	100 if attempted div or mod by 0, 0 on success
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int *operation (int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	operation = get_op_func(operator)

	if (argc != 4) /* if number of arguments wrong */
	{
		printf("Error\n");
		exit(98); /* Error Code 98 */
	}

	/* need Error Code 99 if statement */

	/* Error Code 100 addressed in get_op_func */

	
