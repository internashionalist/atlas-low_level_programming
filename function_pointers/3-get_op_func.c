#include "3-calc.h"

/**
 * get_op_func - selects correct function from user input
 * @s: operator passed as argument to program
 *
 * Return: pointer to corresponding function
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 6)
	{
		if (s[0] == ops->op[i]) /* iterate through until op found */
		{
			break; /* once you found it, stop looking */
		}
		i++;
	}

	return (ops[i / 2].f);
}
