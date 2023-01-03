#include <stdlib.h>
#include "main.h"
/**
 * print_binary - block
 * Description: prints the binary representation of a number
 * @n: parameter
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	putchar('\n');
}
