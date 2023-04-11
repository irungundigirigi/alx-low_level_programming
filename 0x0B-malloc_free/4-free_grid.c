#include "main.h"
#include <stdlib.h>

/**
 * free-grid - free up 2d grid
 * @grid: pointer 2d grid
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}	
