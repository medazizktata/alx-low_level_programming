#include "main.h"
/**
 * print_square - block
 * Description: prints square
 * @size: parameter
 * Return: square
 */
void print_square(int size)
{
	int i, j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
			_putchar('#');
	}
}
