#include "main.h"

/**
 * print_chessboard - prints 8x8 chessboard
 *@a: pointer to array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0; /* first counter */
	unsigned int k = 0; /* second counter */

	for (; i < 8; i++) /* is shorter better?? */
	{
		for (; k < 8; k++) /* hope this format works */
		{
