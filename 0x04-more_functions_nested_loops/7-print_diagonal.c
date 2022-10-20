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
		int i, j;

		j = 0;
		while (j < n)
		{
			i = 0;
			while (i < j)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
