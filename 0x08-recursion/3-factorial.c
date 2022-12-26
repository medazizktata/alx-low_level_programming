#include "main.h"
/**
 * factorial - block
 * Description: returns factorial
 * @n: parameter
 * Return: integer
 */
int factorial(int n)
{
	int s;

	if (n < 0)
	{
		s = -1;
	}
	else if (n == 0)
	{
		s = 0;
	}
	else
	{
		s = s * factorial(n - 1);
	}
	return (s);
}
