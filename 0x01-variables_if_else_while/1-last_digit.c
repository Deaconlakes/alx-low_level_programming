#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program will assign a random num to the var n each time it is +x
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num  = n % 10;

	if (num > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, num);
	}
	else
	{
		printf("last digit of %d is %d and is less that 6 and not 0\n", n, num);
	}
	return (0);
}
