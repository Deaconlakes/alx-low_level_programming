#include "main.h"
/**
 * _strcat - function to concatinate 2 strings
 * @dest: string to recieve new value
 * @src: string to be appended
 * Return: return dest value
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}
	while (*src)
	{
		*dest = *src;
		p++;
		src++;
	}
	*p = '\0';

	return (dest);
}
