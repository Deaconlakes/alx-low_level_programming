#include "main.h"
/**
 * _abs - function to check the value of an integer
 *
 * @i: input number as an integer
 *
 * Return: absolute vaule
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
