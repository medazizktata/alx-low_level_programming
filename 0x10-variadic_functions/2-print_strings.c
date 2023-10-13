#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings with separator
 * @separator: parameter1
 * @n: number of arguments
 * @...: a variable number of parameter
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str =  va_arg(ptr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
