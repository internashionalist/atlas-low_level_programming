#include "main.h"

/**
* print_rev - prints string in reverse, followed by new line
* @s: string
*
* Return: Always 0
*/

void print_rev(char *s)
{
	int i;
	int j;

	j = 0;
	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
