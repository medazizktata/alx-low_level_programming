#include "main.h"
/**
 * more_numbers - block
 * Description: print more numbers
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 15 ; i++)
			_putchar('0' + i);
	_putchar('\n');
	}
}
