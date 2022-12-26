#include "main.h"
/*
 * _strlen_recursion - main block
 * Description: returns the length of a string
 * Result: integer
 */
int _strlen_recursion(char *s)
{
	int som = 0;

	while (*s != '\0')
	{
		som += _strlen_recursion(s + 1);
	}
	return (som);
}
