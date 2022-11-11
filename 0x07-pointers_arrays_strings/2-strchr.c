#include "main.h"
/**
 * _memset - block
 * Description: locates a character in a string
 * @s: parameter1
 * @c: parameter2
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '0')
	{
		if s[i] == c
		{
			return (s + 1);
		}
		i++;
	}
	return ('\0');
}
