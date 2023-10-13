#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - block
* Description: prints numbers
* @separator: parameter1
* @n: parameter2
* @...:number of arguments
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	int s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_args(args, int);
		printf("%d", s);
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
