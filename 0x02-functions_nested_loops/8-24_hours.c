#include "main.h"
/**
 * jack_bauer - prints the minutes of the day
 *
 * Return: no return
 *
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0 ; h <= 24 ; h++)
	{
		for (m = 0 ; m <= 60 ; m++)
		{
			if (h >= 24 && m >= 60)
				break;
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
