#include "main.h"
/**
 * _abs - main block
 * @n: parameter
 * Description: absolute value of integer
 * Return: absolute value
 */
int _abs(int n)
{
	int x;

	if (n < 0)
		x = -n;
	else if (n > 0)
		x = n;
	return (x);
}
