#include "main.h"
/**
 * _puts_recursion - main block
 * Desciption: print a string
 * @s: parameter1
 * Return: void
 */
void _puts_recursion (char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
