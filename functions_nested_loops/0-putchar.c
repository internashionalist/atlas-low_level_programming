#include "main.h"

/**
 * main - prints "_putchar \n" without any libraries
 *
 * Return: Always 0
 */

int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str++);
	}
	return (0);
}
