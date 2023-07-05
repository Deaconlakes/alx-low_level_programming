#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string input
 * @accept: input
 * Return: the number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[i]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
