#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - main block
 * Description: convert binary to uint
 * @b: parameter
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int s, len;

	s = 0;
	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);
		s += (s << 1) | (b[i] - '0');
	}
	return (s);
}
