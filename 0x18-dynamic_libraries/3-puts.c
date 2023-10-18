#include "main.h"
#include <stdio.h>
/**
 * _puts - function that print a str
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		putchar(*str++);
	}
		putchar('\n');
}
