#include "main.h"

/**
 * free_grid - frees 2D grid from alloc_free
 * @grid: grid to be freed
 * @height: pointers in grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0; /* init counter to 0 */

	for (; i < height; i++) /* cycle through */
	{
		free(grid[i]); /* free 2D grid */
	}

	free(grid);
}
