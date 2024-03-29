#include "main.h"
/**
 * _strlen_recursion - block
 * Description: return length of string
 * @s: parameter
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
