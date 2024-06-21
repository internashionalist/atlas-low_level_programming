#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number added
 * @b: second number added
 *
 * Return: addition result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds difference between a and b
 * @a: first number
 * @b: number subtracted
 *
 * Return: difference result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a by b
 * @a: first number multiplied
 * @b: second number multiplied
 *
 * Return: multiplication result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: number divided
 * @b: divisor
 *
 * Return: division result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - finds remainder of a / b
 * @a: number divided
 * @b: divisor
 *
 * Return: remainder of division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
