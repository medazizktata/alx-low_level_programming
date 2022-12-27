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
	int i, j;
	int *array;

	if (height <= 0 || width <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array = malloc(sizeof(int) * (i + j + 1));
			array[j] = "0";
		}
		if (i != height - 1)
		{
			array = malloc(sizeof(char));
			array += '\n';
		}
	}
	if (array == NULL)
		return (NULL);
	array = malloc(sizeof(char));
	array += '\0';
	return (array);
}
