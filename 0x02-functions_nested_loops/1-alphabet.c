#include "main.h"
/**
 * print_alphabet - main block
 * Description: write print_alphabet function
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar (i);
		i++;
	}
	_putchar('\n');
}
