#include "main.h"
/**
 * print_most_numbers - block
 * Description: print most numbers
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar('0' + i);
	_putchar('\n');
}
