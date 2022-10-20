#include <stdio.h>
/**
 * main - main block
 * Description: print numbers followed by , and space
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);

}
