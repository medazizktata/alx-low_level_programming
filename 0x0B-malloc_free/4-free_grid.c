#include <stdlib.h>
#include "main.h"
/**
 * free_grid - block
 * Description: free grid
 * @grid: parameter
 * @height: parameter
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
