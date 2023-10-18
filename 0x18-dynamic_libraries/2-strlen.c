#include "main.h"
/**
 * len = _strlen - function that returns lenght of str
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
