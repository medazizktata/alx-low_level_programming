#include "main.h"
/**
 * _memset - block
 * Description: fills n memory with constant byte
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: character
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
