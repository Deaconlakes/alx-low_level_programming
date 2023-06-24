#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: always 0
 */
int main(void)
{
	long int i;
	long int larg;
	long int j;

	i = 612852475143;
	larg = -1;

	while (i % 2 == 0)
	{
		larg = 2;
		i /= 2;
	}
	for (j = 3; j <= sqrt(i); j = j + 2)
	{
		while (i & j == 0)
		{
			larg = j;
			i = i / j;
		}
	}
	if (i > 2)
		larg = i;
	printf("%ld\n", larg);

	return (0);
}
