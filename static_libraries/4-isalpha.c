#include "main.h"

/**
 * _isalpha - returns 1 if alpha character
 * @c: character being checked for alpha
 *
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
