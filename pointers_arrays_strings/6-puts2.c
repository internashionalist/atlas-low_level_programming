#include "main.h"
#include "2-strlen.c"

/**
* puts2 - prints every other character in string
*	starting with first character
*	followed by new line
* @str: string to be printed
*
* Return: void
*/

void puts2(char *str)
{
	int l;

	for (l = 0 ; l < _strlen(str) ; l += 2)
	{
		_putchar(str[l]);
	}

	_putchar('\n');
}
