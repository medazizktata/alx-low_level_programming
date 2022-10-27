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
	*dest = putchar(*src);
	*dest = putchar('\0');
	return (*dest);
}
