#include "main.h"

/**
 * alloc_grid - makes a grid
 * @width: grid collumns
 * @height: grid rows
 * Return: pointer to grid, or NULL
 */

int **alloc_grid(int width, int height)
{
	int TBD;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

		
