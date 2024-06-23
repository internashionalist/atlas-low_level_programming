#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: list of types of arguments passed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *string;
	char *separator;

	va_start(args, format); /* init list, format first */

	i = 0;
	
	separator = ""; /* for now, no separator */

	while (format && format[i]) 
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(args, int));
				break;
			
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;



