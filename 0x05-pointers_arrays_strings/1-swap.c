#include <stdio.h>
/**
 * swap_int - block
 * @a: parameter
 * @b: parameter
 * Description: Swapping two values of integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = *a;
	*a = c;
}
