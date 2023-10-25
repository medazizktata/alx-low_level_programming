#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter1
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
