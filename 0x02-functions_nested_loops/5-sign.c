#include "main.h"
/**
 * print_sign - main block
 *@n: parameter
 * Description: Determine the sign of a number
 * Return: 0, 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	if (n < 0)
	{
		printf("-");
		return (-1);
	}
	if (n == 0)
	{
		printf("0");
		return (0);
	}
}
