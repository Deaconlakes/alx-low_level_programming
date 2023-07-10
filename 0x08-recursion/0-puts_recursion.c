#include "main.h"
/**
 * _puts_recursion - function to print string recursion with new line
 * @s: string variable
 *
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
