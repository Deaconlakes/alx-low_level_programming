#include "main.h"
/**
 * times_table - functions that print all the product of 9
 *
 * Return - no return value
 *
 */
void times_table(void)
{
	int a, b, prodt;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			prodt = a * b;
			if (prodt < 10)
			{
				_putchar(prodt + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(prodt / 10 + '0');
				_putchar(prodt % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
