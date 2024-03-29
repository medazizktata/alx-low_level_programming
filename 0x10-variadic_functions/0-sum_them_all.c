#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - block
* Description: the sum of all its parameters
* @n: parameter
* @...: variable number of arguments
* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int s = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
