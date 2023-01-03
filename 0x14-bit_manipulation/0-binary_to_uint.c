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
	unsigned int s;

	s = 0;
	while (b && *b)
	{
		if ((*b != '0') && (*b != '1'))
			return (0);
		s = (s << 1) | (*b - '0');
		b++;
	}
	return (s);
}
