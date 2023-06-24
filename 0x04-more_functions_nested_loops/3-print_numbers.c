#include "main.h"
/**
 * print_numbers - main fucntion to print 1-9 with _putchar
 *
 * Retrun: always 0
 */
void print_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
