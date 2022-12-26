#include "main.h"
/**
 * _print_rev_recursion - main block
 * Description: print a string in reverse
 * @s: parameter
 * Result: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
