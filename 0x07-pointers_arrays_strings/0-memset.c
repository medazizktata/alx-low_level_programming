#include "main.h"
/**
 * _memset - block
 * Description: fills n bytes of memory
 * @s: parameter1
 * @b: parameter2
 * @n: parameter3
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
