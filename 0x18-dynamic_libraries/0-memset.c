#include "main.h"
/**
 * _memset - function to fill meory with content bytes
 * @s: memory to be filled
 * @b: character to be copied
 * @n: numbers of character
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
