#include "main.h"
/**
 * _memcpy - block
 * Description: copies memory area
 * @dest: parameter1
 * @src: parameter2
 * @n: parameter3
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
