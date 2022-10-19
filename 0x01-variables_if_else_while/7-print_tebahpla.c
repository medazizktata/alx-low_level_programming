#include <stdio.h>
/**
 * main - main block
 * Description: print single digit numbers of base 10 using putchar
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 122 ; i > 96 ; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
