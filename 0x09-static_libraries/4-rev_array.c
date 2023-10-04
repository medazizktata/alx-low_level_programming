#include "main.h"
/**
 * reverse_array - block
 * Description: reverse array
 * @a: parameter1
 * @n: parameter2
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i;

	int c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
