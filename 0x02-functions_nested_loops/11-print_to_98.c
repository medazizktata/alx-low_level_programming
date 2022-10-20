#include "main.h"
/**
 * print_to_98 - main
 *@n: parameter
 * Description: prints to 98
 * Return: array
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			printf(', ');
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (j = n ; j >= 98 ; j--)
		{
			printf("%d", j);
			printf(', ');
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", 98);
}
