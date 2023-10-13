#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - block
* Description: prints strings
* @separator: parameter1
* @n: parameter2
* @...:number of arguments
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_args(args, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
