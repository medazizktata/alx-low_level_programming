#include "main.h"
/**
 * factorial - block
 * Description: return a factorial
 * @n: parameter
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int f = 1;
		if (f != 0)
		{
			f = f * factorial(f - 1);
		}
		return (f);
	}
}
