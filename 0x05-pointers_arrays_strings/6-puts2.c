#include "main.h"
/**
 * puts2 - function that print every char of string
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);
		a += 2;
	}
	putchar('\n');
}
