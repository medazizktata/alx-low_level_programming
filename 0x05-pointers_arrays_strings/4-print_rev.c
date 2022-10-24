#include "main.h"
/**
 * print_rev - block
 * @s: pointer parameter
 * Description: prints a string in reverse
 * Return: none
 */
void print_rev(char *s)
{
	int i = 0;

	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1 ; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
