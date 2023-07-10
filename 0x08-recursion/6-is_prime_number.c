#include "main.h"
/**
 * prime_num - function to calculate if its prime no
 * @a: input
 * @b: divisor
 * Return: 0
 */
int prime_num(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_num(a, b + 1));
}
/**
 * is_prime_number - check if it is a prime no
 * @n: input num
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
