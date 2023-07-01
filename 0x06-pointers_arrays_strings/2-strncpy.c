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

	for (i = 0; i < n && src[i] != '\0'; i++)
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
