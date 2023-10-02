#include <stdio.h>
/**
 * main - block
 * Description: print number of arguments
 * @argc: arg1
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
