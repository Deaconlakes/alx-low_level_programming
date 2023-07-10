#include "main.h"
/**
 * _strlen_recursion - function to print string lenght
 * @s: string input to check lenght
 *
 * Return: number of the lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
