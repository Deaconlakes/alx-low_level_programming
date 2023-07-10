#include "main.h"
/**
 * _pow_recursion -  function to return the power of a given num
 * @x: the number
 * @y: the power
 *
 * Return: the result of the power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
