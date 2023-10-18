#include <stdlib.h>
/**
 * add - fucnt that sums up two integers
 * @a: integer
 * @b: integer
 * Return: sum of a and b
 **/
int add(int a, int b)
{
	return (a + b);
}

/**
 * mul - fucnt multiplies two integers
 * @a: integer
 * @b: integer
 * Return: multiplication of a and b
 **/
int mul(int a, int b)
{
	return (a * b);
}

/**
 * sub - fucnt that subtracts two integers
 * @a: integer
 * @b: integer
 * Return: difference of a and b
 **/
int sub(int a, int b)
{
	return (a - b);
}

/**
 * divi - funct that divides two integers
 * @a: integer
 * @b: integer
 * Return: division of a by b, or -1 on division by zero
 **/
int divi(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
/**
 * mod - funct that calculates the remainder of division
 * @a: integer
 * @b: integer
 * Return: remainder of a divided by b, or -1 on division by zero
 **/
int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
