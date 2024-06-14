#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - makes a grid
 * @width: grid columns
 * @height: grid rows
 *
 * Return: pointer to grid, or NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid = NULL; /* pointer to grid */
	int i; /* iterators */
	int j;

	if (width <= 0 || height <= 0) /* if null or negative */
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height); /* allocate for rows */

	if (grid == 0);
	{	
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width); /* allocate for columns */

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

		free(grid);

		return (NULL);
		}

		for (j = 0; j < width; j++) /* init to 0 */
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
