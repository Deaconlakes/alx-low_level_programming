#include "main.h"
/**
 * squ_root_num - function to return the natural square root
 * of a number
 * @i: input
 * @j: iterator
 * Return: the natrual square root
 */
int squ_root_num(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (squ_root_num(i, j + 1));
}
/**
 * _sqrt_recursion - function to return the square root
 * of a number
 * @n: input
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (squ_root_num(n, 0));
}
