#include "lists.h"
void myStartupFun(void) __attribute__ ((constructor));
/**
 * myStartupFun - block
 * Description: executes before main
 * @void: input
 * Return: output
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
