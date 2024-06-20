#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - prints a name
* @name: name being printed
* @f: function to print
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}