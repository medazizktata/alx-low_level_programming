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
		char *array[] = malloc(size * sizeof(char));
		return array;
	}
}
