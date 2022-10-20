#include "main.h"
/**
 * print_to_98 - main
 *@n: parameter
 * Description: prints to 98
 * Return: array
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (j = n ; j >= 98 ; j--)
		{
			_putchar(j);
			_putchar(',');
			_putchar(' ');
		}
	}
}
