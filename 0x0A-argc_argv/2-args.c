#include <stdio.h>
/**
 * main - block
 * Description: print arguments
 * @argc: arg1
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char* argv[])
{
	int i=0;
	while(i < argc){
		printf("%s\n", *(argv+i));
		i++;
	}
	return 0;
}
