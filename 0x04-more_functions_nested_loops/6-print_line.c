#include "main.h"
/**
 * print_line - block
 * @n: parameter
 * Description: draws a line
 * Return: a line
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i <= n ; i++)
			_putchar('_');
		_putchar(' ');
	}
}
