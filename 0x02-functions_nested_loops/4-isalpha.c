#include "main.h"
/**
 * _isalpha - main block
 * @c: parameter
 * Description: check if c is a letter
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
