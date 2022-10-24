#include "main.h"
#include <stdio.h>
/**
 * print_array - block
 * Description: print the n numbers of array
 * @n: parameter number of elements to print
 * @a: parameter2 array
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");

}
