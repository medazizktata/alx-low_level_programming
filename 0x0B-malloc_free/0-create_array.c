#include "main.h"
/** create_array - block
 * Description: create an array of chars
 * @size: parameter1
 * @c: parameter2
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return NULL;
	}
	else
	{
		char *array = (char*)malloc(size * sizeof(char));
		if (array == NULL)
			return NULL;
		for (unsigned int i = 0; i < size; i++)
		{
			array[i] = c
		}
		return array;
	}
}
