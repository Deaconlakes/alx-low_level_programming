#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function executing code
 *
 * Return: always 0
 *
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	if (num > 5)
		printf("last digit of %d is %d and is greater than 5", n, num);
	else if (num == 0)
		printf("last digit of %d is %d and is 0", n, num);
	else
		printf("last digit of %d is %d and is less than 6 and not 0", n, num);
	printf("\n");
	return (0);
}
