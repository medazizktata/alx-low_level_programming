#include <stdio.h>
/**
 * _puts - block
 * @str: parameter
 * Description: prints a string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
