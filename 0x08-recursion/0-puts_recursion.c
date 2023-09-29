#include main.h
#include <stdio.h>
/**
 * _puts_recursion - main block
 * Desciption: print a string
 * @s:char
 * Return: string
 */
void _puts_recursion(char *s){
        if (*s == '\0')
        {
		printf('\n');
		return;
	}
	printf(%c, *s)
	_puts_recursion(s + 1);
}
