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

	int j = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
		j++
	}
	_putchar('\n');
}
