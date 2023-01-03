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
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
