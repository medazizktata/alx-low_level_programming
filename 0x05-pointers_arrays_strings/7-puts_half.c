#include "main.h"
/**
 * puts_half - block
 * @str: pointer parameter
 * Description: prints a string only half
 * Return: none
 */
void puts_half(char *str)
{
	int i = 0;

	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = (i / 2) ; j < i ; j++)
		_putchar(str[j]);
	_putchar('\n');
}
