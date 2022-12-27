#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - main block
 * Description: return a two dimaensional grid
 * @width: parameter
 * @height: parameter
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **array;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		array[i] = calloc(width, sizeof(int));
	}
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	return (array);
}
