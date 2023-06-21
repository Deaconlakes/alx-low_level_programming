#include "main.h"
/**
 * print_last_digit - function to print the last digit of a number
 *
 * @n: input number as integer
 *
 * Return: last digit
 *
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
	{
		_putchar(-j + 48);
		return (-j);
	}
	else
	{
		_putchar(j + 48);
		return (j);
	}
}
