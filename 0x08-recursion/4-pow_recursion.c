#include "main.h"
/**
 * _pow_recursion - block
 * Description: return x raised to power of y
 * @x: parameter1
 * @y: parameter2
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return(1);
	else
		return (x * _pow_recursion(x, y - 1));
}
