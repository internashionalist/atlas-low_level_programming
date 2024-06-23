#include "variadic_functions.h"

/**
 * print_strings - prints strings + \n
 * @separator: string printed between
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
