#include <stdio.h>
#include <stdlib.h>
/**
* main - block
* Description: multiply ,umbers
* @argc: arg1
* @argv: arguments array
* Return: 0
*/
int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		int n1 = atoi(argv[1]);

		int n2 = atoi(argv[2]);

		m = n1 * n2;
		printf("%d\n", m);
		return (0);
	}
	else
	{
		printf("Error\n");
		printf("You need 2 numbers to get the multiplication result\n");
		return (1);
	}
}
