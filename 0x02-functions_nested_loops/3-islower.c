#include "main.h"
/**
 * _islower - main block
 * @c: parameter
 * Description: print if c is a lowercase caracter
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
