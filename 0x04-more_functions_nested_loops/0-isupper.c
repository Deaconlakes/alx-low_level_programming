#include "main.h"
/**
 * _isupper -function to test uppercase alphabet
 * @c: character checker
 *
 * Return: 1 if is true otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
