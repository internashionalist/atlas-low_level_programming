#include "main.h"

/**
* _puts - prints a string plus new line to stdout
* @str: printed string
*
* Return: Always 0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
