#include "main.h"

/**
 * print_chessboard - prints 8x8 chessboard
 *@a: pointer to array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i; /* rows iterator */
	unsigned int k; /* columns iterator */


	for (i = 0; i < 8; i++) /* is shorter better?? */
	{
		for (k = 0; k < 8; k++) /* hope this format works */
		{
			_putchar(a[i][k]); /* print arrays */
		}

		_putchar('\n'); /* new line */
	}
}
