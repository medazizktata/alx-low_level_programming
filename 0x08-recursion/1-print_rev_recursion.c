#include "main.h"
/**
 * _print_rev_recursion - main block
 * Description: print a string in reverse
 * @s: parameter
 * Result: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i; i > 0 ; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar("\n");
}
