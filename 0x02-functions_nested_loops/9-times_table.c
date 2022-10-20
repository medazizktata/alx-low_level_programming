#include "main.h"
/**
 * times_table - main block
 * Description: prints 9 multiplication table
 * Return: array of values
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1 ; j < 10 ; j++)
		{
			k = i * j;
			if ((k / 10) > 0)
				_putchar(k / 10 + '0');
			else
				_putchar(' ');
			_putchar('0' + k % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
