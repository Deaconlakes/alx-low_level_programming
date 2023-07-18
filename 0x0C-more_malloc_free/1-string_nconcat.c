#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * while second string is a n value
 * @s1: string 1
 * @s2: string 2
 * @n: no of element to concat from str 2
 * Return: pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *s;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[1] != '\0'; a++)
			;
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		s[c] = s1[c];
	for (c = 0; c < b; c++)
		s[c + a] = s2[c];
	s[a + b] = '\0';
	return (s);
}
