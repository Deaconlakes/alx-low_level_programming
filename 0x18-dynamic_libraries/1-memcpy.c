#include "main.h"
/**
 * _memcpy - function that copy memero area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 * Return: copied memory with bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);

}
