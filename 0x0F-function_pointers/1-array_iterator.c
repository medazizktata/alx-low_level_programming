#include "function_pointers.h"
/**
* array_iterator - block
* Description: executes a function given as a parameter on each element of an array
* @array: parameter1
* @size: parameter2
* @action: parameter3
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size -- > 0)
		{
			action(*array);
			array++;
		}
	}
}
