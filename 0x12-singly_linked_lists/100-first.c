#include <stdio.h>
/**
 * pre_main_message - function before main
 * Return: no return
 */

void __attribute__((constructor)) pre_main_message()
{
	printf("You're beat! and yet, you must allow,");
	printf("I bore my house upon my back!\n");
}
