#include "main.h"
/**
 * factorial - funtion to return the factoria of a num
 * @n: factorial number input
 *
 * Return: return the factorial of given number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
