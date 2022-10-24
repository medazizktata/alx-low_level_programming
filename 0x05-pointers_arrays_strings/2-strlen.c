#include <stdio.h>
/**
 * _strlen - block
 * @s: parameter
 * Description: return length of a string
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
