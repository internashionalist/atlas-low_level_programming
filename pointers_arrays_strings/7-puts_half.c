#include "main.h"

/**
* puts_half - prints only second half of string
* @str: string
*
* Return: Always 0
*/

void puts_half(char *str)
{
	int i = 0;
	int k;

	for (i = 0; str[i] != '\0'; i++)
		i++;

	if (i % 2 == 1)
	{
		k = (i - 1) / 2;
		k += 1;
	}
	else
	{
		k = i / 2;
	}
	for (; k < i; k++)
	{
		_putchar(str[k]);
	}
}
