#include "main.h"
/**
 * _isdigit - block
 * Description: check digit
 * @c:parameter
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int r;

	if ((c >= 48) || (c <= 57))
	{
		r = 1;
	}
	else
		r = 0;
	return (r);
}
