#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - free the memory
 * @grid: grid to be free
 * @height: parameter
 */

void free_grid(int **grid, int height)
{
	int i;

	/* check if grid is NULL */
	if (grid == NULL)
		return;
	/* Free each row in the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/* Free the arrays of pointers */
	free(grid);
}
