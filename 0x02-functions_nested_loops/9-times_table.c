#include "main.h"
/**
 * times_table - functions that print all the product of 9
 *
 * Return - no return value
 *
 */
void times_table(void)
{
	int a, b, product;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			product = a * b;
			if (product < 10)
			{
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
