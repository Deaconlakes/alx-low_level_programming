#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 *
 */

int main(void)
{
	int num_a, num_b;

	num_a = '0';
	num_b = '0';

	while (num_a <= '9')
	{
		while (num_b <= '9')
		{
			if (num_a < num_b)
			{
				putchar(num_a);
				putchar(num_b);
				if (num_a != '8' || (num_a == '8' && num_b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num_b++;
		}
		num_a++;
		num_b = '0';
	}
	putchar('\n');
	return (0);
}
