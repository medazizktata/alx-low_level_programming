#include "main.h"
/**
 * _puts-recursion - main block
 * Description: print a char with new line
 * @s: parameter1
 * Result: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion((s + 1));
	}
}
