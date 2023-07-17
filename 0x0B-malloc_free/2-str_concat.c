#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function to concatenate two str
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the concat string which memory
 * was allocatedfor
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int lenght1, lenght2, a, b;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	lenght1 = 0;
	while (s1[lenght1] != '\0')
	{
		lenght1++;
	}

	lenght2 = 0;
	while (s2[lenght2] != '\0')
	{
		lenght2++;
	}

	ptr = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < lenght1; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b <= lenght2; b++)
	{
		ptr[a] = s2[b];
		a++;
	}
	return (ptr);
}
