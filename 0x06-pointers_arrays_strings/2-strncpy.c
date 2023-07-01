#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: destination of string copied
 * @src: string to be copied
 * @n: numbers of bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src[i];
		dest[i]++;
		src[i]++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		dest[i]++;
		n--;
	}
	return (dest);
}
