#include "main.h"
/**
 * _strlen_recursion - main block
 * Description: return length string
 * @s: parameter1
 * Result: integer
 */
int _strlen_recursion(char *s)
{
	int som = 0;

	if (*s != '\0')
	{
		som += _strlen_recursion(s + 1) + 1;
	}
	return (som);
}
