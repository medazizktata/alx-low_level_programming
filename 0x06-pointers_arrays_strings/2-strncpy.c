#include "main.h"
/**
 * *_strncpy - block
 * Description: copies a string
 * @dest: pointer
 * @src: pointer
 * @n: parameter
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, ont n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
