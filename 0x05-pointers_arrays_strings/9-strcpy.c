#include "main.h"
/**
 *_strcpy - block
 * Description: copy string to another one and return address
 * @dest: parameter1 destination
 * @src: parameter2 source
 * Return: address of the destination
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	int i;

	while (src[l])
		l++;
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
