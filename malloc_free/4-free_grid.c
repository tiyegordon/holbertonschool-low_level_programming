#include "main.h"
#include <stdlib.h>

/*
 * free_grid - frees 2 dimensional grid previouslly created
 * @grid: address of the grid
 * @height: height of the grid
 *
 * Returns: Nothing
 *
 */

void free_grid(int **grid, int height)

{
	int i;
	for ( i = 0; i < height; i++)
	{
		free (grid[i]);
	}
	free(grid);
}
