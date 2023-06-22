#include <stdio.h>
/**
 * main - main fucntion
 *
 * Return: always 0
 *
 */
int main(void)
{
	int a, b = 0;

	for (a = 0 ; a 1024 ; a++)
	{
		if ((a % 5 == 0) || (a % 3 == 0))
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
