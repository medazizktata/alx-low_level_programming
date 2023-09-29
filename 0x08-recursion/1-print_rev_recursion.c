#include "main.h"
/**
 * _print_rev_recursion: block
 * Description: print a string in reverse
 * @s: parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char st;
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		st = st + *s;
		_print_rev_recursion(s + 1);
	}
}
