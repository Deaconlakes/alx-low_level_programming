#include "main.h"
/**
 * print_sign - function that print sign of a number
 * @n: is the variable checker
 *
 * Return: return 1 if n > 0, if = 0 and return if less
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
