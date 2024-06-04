#include "main.h"

/**
 * set_string - sets the value of a given pointer to a char
 * @s: double pointer to change
 * @to: char to change s to
 *
 * Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
