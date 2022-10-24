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

	int j, h;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		h = i / 2;
	if (i % 2 == 1)
		h = ((i + 1) / 2);
	for (j = h ; j < i ; j++)
		_putchar(str[j]);
	_putchar('\n');
}
