#include <stdio.h>
/**
 * *_strcat - block
 * Description: appends two strings
 * @dest: parameter
 * @src: parameter
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int l1 = 0;

	int l2 = 0;

	while (dest[l1] != '\0')
	{
		l1++;
	}
	while (src[l2] != '\0')
	{
		dest[l1] = src[l2];
		l2++;
		l1++;
	}
	return (dest);
}
