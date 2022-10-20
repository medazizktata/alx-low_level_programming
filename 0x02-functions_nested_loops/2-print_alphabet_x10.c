#include "main.h"
/**
 * print_alphabet_x10 - main block
 * Description: write print_alphabet_x10 function
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		int i = 'a';

		while (i <= 'z')
		{
			_putchar (i);
			i++;
		}

		_putchar('\n');
	}
}
