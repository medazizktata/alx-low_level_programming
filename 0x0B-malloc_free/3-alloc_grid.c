#include "main.h"
/**
* alloc_grid - block
* Description: returns a pointer to a 2 dimensional array
* @width: parameter1
* @height: parameter2
* Return: pointer to pointer to int
*/
int **alloc_grid(int width, int height)
{
	int **array;

	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * width);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(int) * height);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			array[i][k] = 0;
	}
	return (array);
}
