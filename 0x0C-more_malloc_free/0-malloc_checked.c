#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter1
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);
if (m == 0)
	exit(98);

return (m);
}
