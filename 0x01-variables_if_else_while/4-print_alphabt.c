#include <stdio.h>
/**
 * main -main block
 * Description: print alphabt in lower case remove e and q
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		if (i == 113 || i == 101)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
