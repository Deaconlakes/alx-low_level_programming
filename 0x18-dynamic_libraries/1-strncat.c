#include "main.h"
/**
 * _strncat - function to concat 2 str at n bytes
 * @dest: destination of str to be concat
 * @src: source string pointer
 * @n: number of string to be concat
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0' && n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}
	dest[a] = '\0';
	return (dest);
}
