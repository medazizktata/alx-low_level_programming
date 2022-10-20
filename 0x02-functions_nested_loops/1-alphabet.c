#include "main.h"
/**
 * main - main block
 * Description: print alphabet
 * Return: 0
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
