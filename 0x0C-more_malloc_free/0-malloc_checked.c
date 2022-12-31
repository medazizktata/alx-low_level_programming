#include <stdlib.b>
#include "main.h"
/**
 * malloc_checked - main block
 * Description: allocates memory
 * @b: parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);
	if (ptr == 0)
		exit(98);
}
