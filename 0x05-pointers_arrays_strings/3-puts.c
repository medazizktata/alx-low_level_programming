#include "main.h"
/**
 * _puts - block
 * @str: pointer parameter
 * Description: prints a string
 * Return: none
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
