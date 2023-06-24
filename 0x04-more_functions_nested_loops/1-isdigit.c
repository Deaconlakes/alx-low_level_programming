#include "main.h"
/**
 * _isdigit -  function to check if number is digit
 * @c: checker to check if character is digit
 *
 * Return: 1 if true otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
