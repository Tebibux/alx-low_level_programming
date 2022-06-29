#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional array
 * @grid: multidimentional array of integer
 * @height: height of the grid.
 * Return: no return just frees
 */
void free_grid(int **grid, int height)
{
	if(grid != NULL	&& height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
