#include <stdio.h>
/**
* main - block
* Description: print number of arguments
* @argc: arg1
* @argv: arguments array
* Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return 0;
}
