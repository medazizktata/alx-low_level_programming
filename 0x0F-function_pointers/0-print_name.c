#include "main.h"
/**
* print_name - block
* Description: prints a name
* @name: parameter1
* @f: parameter2
* Return: void
*/
void print_name(char *name, void (*f)(char *)) 
{
	if (f && name)
		f(name);
}
