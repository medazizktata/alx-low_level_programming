#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - block
 * Description: creates array of char and intilisation
 * @size: paramater1
 * @c: parameter2
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(c));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
