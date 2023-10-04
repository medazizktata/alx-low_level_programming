#include "main.h"
/**
 * _strncpy - block
 * Description: copies a string
 * @dest: parameter1
 * @src: parameter2
 * @n: parameter3
 * Return: none
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
