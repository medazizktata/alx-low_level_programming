#include "main.h"
#include <stdlib.h>
/**
 * power - block
 * Description: power of integer
 * @a: parameter1
 * @n: parameter2
 * Return: integer
 */
unsigned int power(int a, int n)
{
	unsigned int i, result;

	for (i = 0; i < n, i++)
		result *= a;
	return (result);
}
/**
 * binary_to_uint - main block
 * Description: convert binary to uint
 * @b: parameter
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, s, len;

	s = 0;
	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
		s += b[i] * power(2, len - i);
	return (s);
}
