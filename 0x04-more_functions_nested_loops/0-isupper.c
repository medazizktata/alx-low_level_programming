#include "main.h"
#include <stdio.h>
/**
 * _isupper - block
 * Description: checks uppercase
 *@c:parameter
 * Return: 0
 */
int _isupper(int c)
{
	int r;

	if ((c > 64) && (c < 91))
		r = 1;
	else
		r = 0;
	return (r);
}
