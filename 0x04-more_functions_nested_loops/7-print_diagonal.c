#include "main.h"
/**
 * print_diagonal - block
 * Description: draws a diagonal
 *@n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i <= n ; i++)
			_putchar('\\');
		_putchar('\n');
	}
}
