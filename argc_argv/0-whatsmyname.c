#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the filename plus \n
 * @argc: arguments
 * @argv: strings
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argc; /* uses argc */
	printf("%s\n", argv[0]); /* prints filename plus \n */

return (0); /* 0 return - success */
}
