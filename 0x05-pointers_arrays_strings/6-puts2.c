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
	While((j % 2 == 0) && (j < i))
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
