#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	char d = '0';

	char c = 'a';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);

}
