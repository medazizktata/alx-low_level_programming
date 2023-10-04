#include "main.h"

/**
 *  * _strncat - block
 * Description: concat n char from src to dest
 * @dest: parameter1 destinations' pointer
 * @src: parameter2 destinations' pointer
 * @n: parameter3 n chars
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int ii;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (ii = 0; ii < n && src[ii] != '\0'; ii++)
	{
		dest[i] = src[ii];
		i++;
	}
	return (dest);
}
