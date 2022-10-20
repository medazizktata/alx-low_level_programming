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
	
	int y;

	y = _abs(n);
	x = y % 10;
	return (x);
}
