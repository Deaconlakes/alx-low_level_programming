#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string input
 * @accept: input set of bytes to be searched
 *
 * Return: if a set is matched to a pointer matched byte,
 * otherwise num
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
