#include "main.h"
/**
 * print_rev - function to print str in reverse
 * @s: string
 * Return: always 0
 */
void print_rev(char *s)
{
	int lenght = 0;
	int i;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	s--;
	for (i = lenght; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
