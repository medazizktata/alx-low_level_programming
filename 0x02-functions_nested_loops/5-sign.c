#include "main.h"
/**
 * print_sign - main block
 *@n: parameter
 * Description: Determine the sign of a number
 * Return: 0, 1 or -1
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar("+");
		x = 1;
	}
	if (n < 0)
	{
		_putchar("-");
		x = -1;
	}
	if (n == 0)
	{
		_putchar("0");
		x = 0;
	}
	return (x);
}
