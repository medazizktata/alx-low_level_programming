#include <stdio.h>
/**
 * main - Entry Point
 * Description: print lowercase alphabet
 * Return: 0
 */
char main(void)
{
	int i;

	for (i = 97, i < 123, i++)
		putchar(i);
	putchar(10);
	return (0);
}
