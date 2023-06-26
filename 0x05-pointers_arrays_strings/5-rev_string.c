#include "main.h"
/**
 * rev_string - reverse strings
 * @s: input string
 * Return: return string in reverse
 */
void rev_string(char *s)
{
	char revrs = s[0];
	int lenght = 0;
	int i;

	while (s[lenght] != '\0')
		lenght++;
	for (i = 0; i < lenght; i++)
	{
		lenght--;
		revrs = s[i];
		s[i] = s[lenght];
		s[lenght] = revrs;
	}
}
