#include "main.h"
/**
 * _pow_recursion - block
 * Description: x power of y
 * @x: parameter1
 * @y: parameter2
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		x = x * _pow_recursion(x, y - 1);
		return (x);
	}
}
