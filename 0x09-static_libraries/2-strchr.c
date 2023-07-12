#include "main.h"
/**
 * _strchr - function that locate character in a string
 * @s: The string to be searched
 * @c: The character to be found
 * Return: if c is found a pointer to the first occurrence of the character
 * otherwise null
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
