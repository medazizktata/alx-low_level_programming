#include "main.h"
#include <stdio.h>
/**
 * puts2 - block
 * @str: pointer parameter
 * Description: prints every other character
 * Return: none
 */
void puts2(char *str)
{
	int i = 0;

	int j;

	While(str[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; j < i ; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
