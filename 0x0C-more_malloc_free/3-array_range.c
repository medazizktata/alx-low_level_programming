#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array of integers
 * @min: parameter1
 * @max: parameter2
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
