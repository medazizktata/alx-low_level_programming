#include <stdlib.b>
#include "main.h"
/**
 * malloc_checked - main block
 * Description: allocates memory
 * @b: parameter
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
