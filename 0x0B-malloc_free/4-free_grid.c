#include "main.h"
/**
* free_grid - block
* Description: frees a 2 dimensional grid
* @grid: parameter1
* @height: parameter2
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
