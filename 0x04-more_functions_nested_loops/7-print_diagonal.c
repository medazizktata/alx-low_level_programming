#include "main.h"
/**
 * print_diagonal - block
 * Description: draws a diagonal
 *@n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	int j = 0;

	if (n > 0)
	{
		i = 0;
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
