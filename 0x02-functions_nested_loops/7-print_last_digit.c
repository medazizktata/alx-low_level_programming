#include "main.h"
/**
 * print_last_digit - main block
 *@n: parameter
 * Description: prints last digit
 * Return: last digit
 */
int print_last_digit(int n)
{
	int x;
	
	if (n < 0)
		x = -1 * (n % 10);
	else 
		x = n % 10;
	_putchar(x + '0');
	return (x);
}
