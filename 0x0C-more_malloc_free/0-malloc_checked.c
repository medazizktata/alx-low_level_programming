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
	void *ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
