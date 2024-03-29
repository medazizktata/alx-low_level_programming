#include "function_pointers.h"
/**
* int_index - block
* Description: searches for an integer
* @array: parameter1
* @size: parameter2
* @cmp: parameter3
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, int_index;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size && cmp(array[i]) == 0)
		i++;
	if (i == size)
		int_index = -1;
	else
		int_index = i;
	return (int_index);
}
