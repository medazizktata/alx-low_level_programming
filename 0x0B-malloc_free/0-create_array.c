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
	if (size == 0)
		return (NULL);
	char *array;

	array = (char *)malloc(size * sizeof(c));
	if (array == NULL)
		return (NULL);
	*array = c;
	return (array);
}
