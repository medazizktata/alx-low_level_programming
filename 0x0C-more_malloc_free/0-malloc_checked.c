#include <stdlib.b>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - main block
 * Description: allocates memory
 * @b: parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *k = malloc(b);

	if (k == NULL)
		exit(98);
	return (k);
}
