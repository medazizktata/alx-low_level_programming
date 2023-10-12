#include "main.h"
#include <stdarg.h>
/**
* sum_them_all - block
* Description: the sum of all its parameters
* @const: parameter1
* @n: parameter2
* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;

	unsigned int num,
	
	va_list args;

	va_start(args, n);

	for (i = 0; i < n, i++)
	{
		num = va_arg(args, unsigned int);
		s += num;
	}
	va_end(args);
	return (s);
}
