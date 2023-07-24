#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum of two numbers
 * @a: number 1
 * @b: number 2
 * Return: the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference between two numbers
 * @a: number 1
 * @b: number 2
 * Return: the difference of two number
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of two numbers
 * @a: number 1
 * @b: number 2
 * Return: the product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division of two numbers
 * @a: number 1
 * @b: number 2
 * Return: the division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of the div of 2 numbers
 * @a: number 1
 * @b: number 2
 * Return: the remainder of the div of 2 num
 */
int op_mod(int a, int b)
{
	return (a % b);
}
